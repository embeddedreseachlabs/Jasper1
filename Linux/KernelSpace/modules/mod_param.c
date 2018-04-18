
#include<linux/module.h>
#include<linux/version.h>
#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/moduleparam.h>
static int val=0;
char *x = "here I  am";
module_param(val, int, S_IRUGO);//read only
module_param(x, charp, S_IRUGO);//read only
//module_param(val,int,S_IRUGO|S_IWUSR);
MODULE_PARM_DESC (val,"INTIALISE ME AT INSERTION TIME");
MODULE_PARM_DESC (x,"char Pointer INTIALISE ME AT INSERTION TIME");
MODULE_SUPPORTED_DEVICE(NULL);
void func(void);

void func()
{
        printk("func invoked\n ");
        printk(" val = %d",val);
        printk(" x = %s",x);
}


int myinit(void)
{
	printk("module inserted\n ");
	func();
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
