#include<linux/init.h>
#include<linux/module.h>

int firstmod_init(void)
{
 printk(KERN_ALERT "hello linux\n");
 return 0;
}

void firstmod_exit(void)
{
 printk(KERN_ALERT "bye linux\n");
 //return 0;
}

module_init(firstmod_init);
module_exit(firstmod_exit);
