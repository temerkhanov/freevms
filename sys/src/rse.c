// $Id$
// $Locker$

#include<linux/sched.h>
#include<asm/hw_irq.h>

#include"../../freevms/sys/src/sysgen.h"
#include"../../freevms/sys/src/rse.h"

int sch$qend(struct _pcb * p) {
  //	{ int i; for (i=0;i<1000000;i++) ; }
  //	set_intr_gate(TEST_VECTOR,&test_code);
  //
  //	printk("setting our vectors\n\ndoing\n");
  //	{ int i; for (i=0;i<1000000;i++) ; }
  //   __asm__ __volatile__("int $0x88\n");
  p->phd$w_quant = -QUANTUM/10;
  /* p->pcb$b_pri++; why must we have this? */
  p->need_resched = 1;
  {
    struct list_head * tmp;
    struct _pcb * e, * next;
    unsigned char c;
    list_for_each(tmp, &runqueue_head) {
      e = list_entry(tmp, struct task_struct, run_list);
      if (can_schedule(e, this_cpu)) {
	if (e->pcb$b_pri <= c) c=e->pcb$b_pri, next=e;
      }
    }
    if (next == e)
      { /* p->need_resched = 0; */ }
    else
      {
	if (p->pcb$b_pri != p->pcb$b_prib) ++p->pcb$b_pri;
      }
  }
  return 1;
}

void sch$resched() {
}
