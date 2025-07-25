/*
 * Simple Hello, World! module
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

/*
 * Init function
 */

static int __init hello_init(void)
{
    printk("Hello, Kernel!\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk("Bye, Kernel!\n");
}


module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
