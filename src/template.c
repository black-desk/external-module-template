// SPDX-FileCopyrightText: 2025 Chen Linxuan <me@black-desk.cn>
//
// SPDX-License-Identifier: GPL-2.0-only

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

/**
 * template_init - Initialize the template module
 * TODO: Update function name to match your module name
 *
 * This function is called when the module is loaded into the kernel.
 * It prints a hello world message to the kernel log.
 *
 * Return: 0 on success
 */
static int __init template_init(void)
{
	pr_info("template: hello world\n"); /* TODO: Update module name in log message */
	return 0;
}

/**
 * template_exit - Clean up the template module
 * TODO: Update function name to match your module name
 *
 * This function is called when the module is removed from the kernel.
 * It prints a goodbye message to the kernel log.
 */
static void __exit template_exit(void)
{
	pr_info("template: goodbye\n"); /* TODO: Update module name in log message */
}

module_init(template_init); /* TODO: Update function name to match your module */
module_exit(template_exit); /* TODO: Update function name to match your module */

MODULE_AUTHOR("Chen Linxuan <me@black-desk.cn>"); /* TODO: Update author */
MODULE_DESCRIPTION("A simple kernel module template"); /* TODO: Update module description */
MODULE_LICENSE("GPL");
MODULE_VERSION("1.0");
