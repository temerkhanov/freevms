#include <linux/sched.h>
#include <linux/smp.h>
#include "../../freevms/lib/src/cpudef.h"
#include "../../freevms/starlet/src/ssdef.h"

int exe$wait(unsigned int efn, unsigned int mask, int waitallflag) {
  struct _pcb * p=smp$gl_cpu_data[smp_processor_id()]->cpu$l_curpcb;
  int efncluster=(efn&224)>>5;
  unsigned long * clusteraddr;
  struct _wqh * wq;
  /* ipl 2*/
  /* no legal check yet */
  clusteraddr=&p->pcb$l_efcs+efncluster;
  p->pcb$b_wefc=efncluster;
  if (efncluster==0 || efncluster==1) goto notcommon;
  /* not impl */
  printk("in a wait non impl routine %x %x %x %x\n",efn,mask,clusteraddr,efncluster);
  return;
 notcommon:
  wq=sch$gq_lefwq;
  /* lock sched */

  if (!waitallflag && (mask & *clusteraddr)) {
  out:
    /* unlock sched */
    return SS$_NORMAL;
  }
  if (waitallflag && (mask & *clusteraddr == mask))
    goto out;
  if (waitallflag) {
    p->pcb$l_sts|=PCB$M_WALL;
    p->pcb$l_efwm&=~mask;
  }

  sch$wait(p,wq);
  return SS$_NORMAL;
}

int exe$waitfr(unsigned int efn) {
  return exe$wait(efn,1<<(efn&31),0);
}

int exe$wflor(unsigned int efn, unsigned int mask) {
  return exe$wait(efn,mask,0);
}

int exe$wfland(unsigned int efn, unsigned int mask) {
  return exe$wait(efn,mask,1);
}
