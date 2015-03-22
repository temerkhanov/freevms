#ifndef _ASMi386_UCONTEXT_H
#define _ASMi386_UCONTEXT_H

struct ucontext
{
    unsigned long     uc_flags;
    struct ucontext  *uc_link;
    stack_t       uc_stack;
    struct sigcontext uc_mcontext;
    sigset_t      uc_sigmask;   /* mask last for extensibility */
};

#endif /* !_ASMi386_UCONTEXT_H */
