#ifndef _I386_CURRENT_H
#define _I386_CURRENT_H

#include "../../freevms/sys/src/system_data_cells.h"

struct task_struct;
//struct _cpu;
#ifdef __arch_um__
#ifndef smp_processor_id
#define smp_processor_id() 0
#endif
#endif

static inline struct task_struct * get_current(void)
{
	return smp$gl_cpu_data[smp_processor_id()]->cpu$l_curpcb;
 }
 
#define current get_current()

#endif /* !(_I386_CURRENT_H) */
