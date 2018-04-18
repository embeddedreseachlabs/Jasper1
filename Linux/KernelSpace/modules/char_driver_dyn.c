
#include<linux/module.h>
#include<linux/version.h>
#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/kdev_t.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#define MAJORNO 301
#define MINORNO 0
int my_open(struct inode *, struct file *);
int my_close(struct inode *, struct file *);
ssize_t my_write(struct file *, const char *, size_t, loff_t *);
ssize_t my_read(struct file *, char *, size_t, loff_t *);

dev_t mydevnum;
struct cdev *my_cdev;

struct file_operations my_fops = {
.owner = THIS_MODULE,
.read = my_read,
.write = my_write,
.open = my_open,
.release = my_close,
};

int my_open(struct inode * node, struct file * f)
{
printk("Open invoked/called\n");
return 0;
}
int my_close(struct inode *node, struct file *f)
{

printk("close invoked/called\n");
return 0;
}
ssize_t my_write(struct file *filp, const char *buf, size_t size, loff_t *offset)
{

printk("write invoked/called\n");

return 0;
}

ssize_t my_read(struct file *filp, char  *buff,size_t count, loff_t *offp)
{

printk("read invoked/called\n");

return 0;
}

int myinit(void)
{
int ret;
	printk("module inserted\n ");
  /* Choose major, minor number and create device number*/

/* Register the Device number*/
        ret = alloc_chrdev_region(&mydevnum,0,1, "myfisrtdyndriver");
	if(0 ==  ret)
	{
	printk("Device number Registration success\n");
	}
	else
	{
	printk("Device number Registration Failed\n");
	}
	printk("Device number = %d\n",mydevnum);
	printk("Major number = %d\n",MAJOR(mydevnum));
	printk("Minor number = %d\n",MINOR(mydevnum));
/*Allocate cdev structure */
	my_cdev=cdev_alloc();
	if(my_cdev != NULL)
	{
	printk("cdev structure allocated\n");
	}
	else
	{
	printk("cdev structure allocation failed\n");
	}
/* Initiaze the cdev structure with file operations*/
	cdev_init(my_cdev, &my_fops);
/* Add cdev structure with the kernel */
	ret = cdev_add(my_cdev, mydevnum, 1);
	if(ret<0)
	printk("Character driver registratioin failed\n");
	else
	printk("Character driver registratioin succesfull\n");
	
	return 0;
}

void myexit(void)
{
	printk("module removed\n ");
	cdev_del(my_cdev);
	unregister_chrdev_region(mydevnum, 1);
	printk("Device number unregistered\n");
}

module_init(myinit);
module_exit(myexit);

/*Kernel module Comments*/
MODULE_AUTHOR("RAJU");
MODULE_DESCRIPTION("FIRST MODULE");
MODULE_LICENSE("GPL");
