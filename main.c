#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init my_init( void ) {
	printk( "template_linux_module: Init\n" );
	return 0;
}

static void __exit my_exit( void ) {
	printk( "template_linux_module: Deinit\n" );
}

module_init( my_init );
module_exit( my_exit );

MODULE_LICENSE( "GPL" );
MODULE_AUTHOR( "HardDie" );
MODULE_DESCRIPTION( "Template" );
MODULE_VERSION( "1.0" );
