obj-m =char_driver.o
obj-m +=char_driver_dyn.o
#obj-m +=mod2.o


KDIR= /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
clean: 
	 rm -rf $(wildcard *.o *.ko *.mod.* .c* .t* test Module.symvers *.order *.markers)
