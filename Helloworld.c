#include <linux/module.h>     
#include <linux/kernel.h>     
#include <linux/init.h>       
  

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Neilya,Yelzhan,Sagyndyk");
MODULE_DESCRIPTION("A simple Hello world module");
  
static int __init hello_start(void)
{
    printk(KERN_INFO "Loading hello module...\n");
    printk(KERN_INFO "Hello world\n");
    return 0;
}
  
static void __exit hello_end(void)
{
    printk(KERN_INFO "Goodbye student\n");
}
  
module_init(hello_start);
module_exit(hello_end);
