/* Device.c v1.3  Module to remember and find devices...*/

/*
        This is part of ODS2 written by Paul Nankervis,
        email address:  Paulnank@au1.ibm.com

        ODS2 is distributed freely for all members of the
        VMS community to use. However all derived works
        must maintain comments in their source to acknowledge
        the contibution of the original author.
*/

/* Should have mechanism to return actual device name... */

/*  This module is simple enough - it just keeps track of
    device names and initialization... */

#include<linux/vmalloc.h>
#include<linux/linkage.h>

#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
#include <linux/ctype.h>
//#include "ssdef.h"
#include "../../freevms/starlet/src/ssdef.h"

#include "../../freevms/lib/src/mytypes.h"
#include "../../freevms/lib/src/fatdef.h"
#include "../../freevms/lib/src/vcbdef.h"
#include "../../freevms/librtl/src/descrip.h"
#include "../../freevms/starlet/src/ssdef.h"
#include "../../freevms/starlet/src/uicdef.h"
#include "../../freevms/starlet/src/namdef.h"
#include "../../freevms/starlet/src/fabdef.h"
#include "../../freevms/starlet/src/rabdef.h"
#include "../../freevms/starlet/src/fibdef.h"
#include "../../freevms/starlet/src/fiddef.h"
#include "../../freevms/starlet/src/rmsdef.h"
#include "../../freevms/starlet/src/xabdef.h"
#include "../../freevms/starlet/src/xabdatdef.h"
#include "../../freevms/starlet/src/xabfhcdef.h"
#include "../../freevms/starlet/src/xabprodef.h"
#include "../../freevms/lib/src/fh2def.h"
#include "../../freevms/lib/src/hm2def.h"
#include "../../freevms/lib/src/fcbdef.h"
#include "../../freevms/lib/src/vmstime.h"

#include "cache.h"
#include "access.h"
//#include "phyio.h"

struct phyio_info {
  unsigned status;
  unsigned sectors;
  unsigned sectorsize;
};

/* device_create() creates a device object... */

void *device_create(unsigned devsiz,void *keyval,unsigned *retsts)
{
    register char *devnam = (char *) keyval;
    register struct DEV *dev = (struct DEV *) vmalloc(sizeof(struct DEV) + devsiz + 2);
    if (dev == NULL) {
        *retsts = SS$_INSFMEM;
    } else {
        register unsigned sts;
        struct phyio_info info;
        dev->cache.objmanager = NULL;
        dev->cache.objtype = 1;
        memcpy(dev->devnam,devnam,devsiz);
        memcpy(dev->devnam + devsiz,":",2);
        sts = phyio_init(devsiz + 1,dev->devnam,&dev->handle,&info);
        *retsts = sts;
        if (sts & 1) {
            dev->vcb = NULL;
            dev->status = info.status;
            dev->sectors = info.sectors;
            dev->sectorsize = info.sectorsize;
        } else {
            vfree(dev);
            dev = NULL;
        }
    }
    return dev;
}

/* device_compare() compares a device name to that of a device object... */

int device_compare(unsigned keylen,void *keyval,void *node)
{
    register struct DEV *devnode = (struct DEV *) node;
    register int cmp = 0;
    register int len = keylen;
    register char *keynam = (char *) keyval;
    register char *devnam = devnode->devnam;
    while (len-- > 0) {
        cmp = toupper(*keynam++) - toupper(*devnam++);
        if (cmp != 0) break;
    }
    return cmp;
}

/* device_lookup() is to to find devices... */

struct DEV *dev_root = NULL;

unsigned device_lookup(unsigned devlen,char *devnam,
                       int create,struct DEV **retdev)
{
    register struct DEV *dev;
    unsigned sts = 1,devsiz = 0;
    while (devsiz < devlen) {
        if (devnam[devsiz] == ':') break;
        devsiz++;
    }
    dev = (struct DEV *) cache_find((void **) &dev_root,devsiz,devnam,&sts,
                                    device_compare,create ? device_create : NULL);
    if (dev == NULL) {
        if (sts == SS$_ITEMNOTFOUND) sts = SS$_NOSUCHDEV;
    } else {
        *retdev = dev;
        sts = SS$_NORMAL;
    }
    return sts;
}
