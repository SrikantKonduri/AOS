#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(srikanthello)
{
        printk("Hello world\n");
        return 0;
}