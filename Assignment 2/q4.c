#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/sched.h>
#include <linux/cred.h>


SYSCALL_DEFINE0(srikantgetpid)
{
        return task_tgid_vnr(current);
}