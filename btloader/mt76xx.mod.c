#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xec49fba3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd516e5c4, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xfc4a8cc1, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1a29bfc2, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xe04277a0, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa989a566, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x19ad6985, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf19bc2a9, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x81bde783, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x15ba50a6, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfd1fef, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x15edebd7, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x3283dd37, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x71fb2624, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x443a605, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe77a21a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4610aee6, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb9af0154, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E8Dp763Ed*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E8Dp7662d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp7632d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0489pE069d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0489pE069d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0489pE080d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0489pE080d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "0F8BC23AD4290355A0CADA0");
