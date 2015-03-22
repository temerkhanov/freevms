/*
 * Machine dependent access functions for RTC registers.
 */
#ifndef _ASM_MC146818RTC_H
#define _ASM_MC146818RTC_H

#include <asm/io.h>

#ifndef RTC_PORT
#define RTC_PORT(x) (0x70 + (x))
#define RTC_ALWAYS_BCD  1   /* RTC operates in binary mode */
#endif

/*
 * The yet supported machines all access the RTC index register via
 * an ISA port access but the way to access the date register differs ...
 */
#define CMOS_READ(addr) ({ \
outb_p((addr),RTC_PORT(0)); \
inb_p(RTC_PORT(1)); \
})
#define CMOS_WRITE(val, addr) ({ \
outb_p((addr),RTC_PORT(0)); \
outb_p((val),RTC_PORT(1)); \
})

#ifndef CONFIG_HPET_TIMER
#define RTC_IRQ 8
#else
/* Temporary workaround due to IRQ routing problem. */
#define RTC_IRQ 0
#endif

#endif /* _ASM_MC146818RTC_H */
