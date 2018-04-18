
#include<linux/module.h>
#include<linux/version.h>
#include<linux/kernel.h>
#include<linux/init.h>
#include <linux/kthread.h>
#include <linux/delay.h>


static struct task_struct *thread_st;
static int thread_fn(void *unused)
{
int i =50;
    while (i--)
    {
        printk(KERN_INFO "Thread Running\n");
        ssleep(5);
    }
    printk(KERN_INFO "Thread Stopping\n");
    do_exit(0);
    return 0;
}
// Module Initialization
static int __init init_thread(void)
{
    printk(KERN_INFO "Creating Thread\n");
    //Create the kernel thread with name 'mythread'
    thread_st = kthread_run(thread_fn, NULL, "mythread");
    if (thread_st)
        printk(KERN_INFO "Thread Created successfully\n");
    else
        printk(KERN_ERR "Thread creation failed\n");
    return 0;
}

void myexit(void)
{
	printk("module removed\n ");
}

module_init(init_thread);
module_exit(myexit);

/*Kernel module Comments*/
MODULE_AUTHOR("TEAM VEDA");
MODULE_DESCRIPTION("FIRST MODULE");
MODULE_LICENSE("GPL");
//MODULE_LICENSE("GPL v2");
