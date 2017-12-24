/*
 *    Filename: myled.mod.c
 *     Version: 0.1.0
 * Description: device driver 
 *     License: GPL
 *
 *      Author: Copyright (C) RyouyaSakai
 *        Date: 2017
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xdb0d8ebc, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x9adaf3a8, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x65a8739c, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xf076f06e, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x79c5a9f0, __VMLINUX_SYMBOL_STR(ioremap) },
	{ 0x92cec8ce, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x7b0d0d08, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x4eb8cc4b, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x25980599, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6654ED5C5A88903CCDC5772");
