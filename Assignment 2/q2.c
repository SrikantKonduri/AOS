#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/syscalls.h>
#include <linux/uaccess.h>

SYSCALL_DEFINE1(srikantprint, char *, msg)
{
  char buffer[256];
  long chunk = strncpy_from_user(buffer, msg, sizeof(buffer));
  if (chunk < 0 || chunk == sizeof(buffer))
          return -EFAULT;
  printk(KERN_INFO "SYSTEM CALL srikantprint: \"%s\"\n", buffer);
  return 0;
}