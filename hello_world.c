#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

static int __init helloworld_init(void)
{
 //pr_info("Hello world!\n");
 printk("Hello world!\n");
 return 0;
}

static int __exit helloworld_exit(void)
{
 //pr_info("Good bye world\n");
 printk("bye bye world\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);
MODULE_AUTHOR("JOHN SAIDA SAHIK");
MODULE_LICENSE("GPL");
