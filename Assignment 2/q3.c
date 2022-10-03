#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/cred.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(srikantprocess)
{
        struct task_struct *parent = current->parent;
        printk("Process ID: %d ; Parent process ID: %d",current->pid,parent->pid);
        return 0;
}