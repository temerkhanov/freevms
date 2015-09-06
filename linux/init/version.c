/*
 *  linux/init/version.c
 *
 *  Copyright (C) 1992  Theodore Ts'o
 *
 *  May be freely distributed as part of Linux.
 */

#include <linux/uts.h>
#include <linux/utsname.h>
#include <linux/version.h>
#include <linux/compile.h>

#define version(a) Version_ ## a
#define version_string(a) version(a)

int version_string(LINUX_VERSION_CODE);

#ifdef __x86_64__
#undef UTS_RELEASE
#define UTS_RELEASE "2.6.12"
#endif

struct new_utsname system_utsname =
{
    UTS_SYSNAME, UTS_NODENAME, UTS_RELEASE, UTS_VERSION,
    UTS_MACHINE, UTS_DOMAINNAME
};
