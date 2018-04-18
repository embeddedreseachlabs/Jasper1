
#include<linux/module.h>
#include<linux/version.h>
#include<linux/kernel.h>
#include<linux/init.h>
int myinit(void)
{
	printk("module inserted\n ");
	return 0;
}

void myexit(void)
{
	printk("module removed\n ");
}

module_init(myinit);
module_exit(myexit);

/*Kernel module Comments*/
MODULE_AUTHOR("RAJU");
MODULE_DESCRIPTION("FIRST MODULE");
MODULE_LICENSE("GPL");
