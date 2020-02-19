obj-m += my_module.o
my_module-objs := main.o

KERNELDIR = /lib/modules/$(shell uname -r)/build/

all:
	make -C ${KERNELDIR} M=$(PWD) modules
clean:
	make -C ${KERNELDIR} M=$(PWD) clean
