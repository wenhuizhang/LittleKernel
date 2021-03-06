#ifndef __build_qemu_virt_a15_test_config_h_H
#define __build_qemu_virt_a15_test_config_h_H
#define LK 1
#define MEMBASE 0X40000000
#define MEMSIZE 0X08000000
#define PLATFORM_SUPPORTS_PANIC_SHELL 1
#define CONSOLE_HAS_INPUT_BUFFER 1
#define MMU_WITH_TRAMPOLINE 1
#define ARM_CPU_CORTEX_A15 1
#define ARM_WITH_CP15 1
#define ARM_WITH_MMU 1
#define ARM_ISA_ARMV7 1
#define ARM_ISA_ARMV7A 1
#define ARM_WITH_THUMB 1
#define ARM_WITH_THUMB2 1
#define ARM_WITH_CACHE 1
#define ARM_WITH_L2 1
#define ARM_WITH_VFP 1
#define ARM_WITH_NEON 1
#define ARCH_DEFAULT_STACK_SIZE 4096
#define KERNEL_ASPACE_BASE 0X40000000
#define KERNEL_ASPACE_SIZE 0XC0000000
#define KERNEL_BASE 0X80000000
#define KERNEL_LOAD_OFFSET 0X10000
#define WITH_SMP 1
#define SMP_MAX_CPUS 4
#define SMP_CPU_CLUSTER_SHIFT 8
#define SMP_CPU_ID_BITS 24
#define MEMBASE 0X40000000
#define MEMSIZE 0X08000000
#define PLATFORM_HAS_DYNAMIC_TIMER 1
#define LK_HEAP_IMPLEMENTATION DLMALLOC
#define PROJECT_QEMU_VIRT_A15_TEST 1
#define PROJECT "QEMU_VIRT_A15_TEST"
#define TARGET_QEMU_VIRT 1
#define TARGET "QEMU_VIRT"
#define PLATFORM_QEMU_VIRT 1
#define PLATFORM "QEMU_VIRT"
#define ARCH_ARM 1
#define ARCH "ARM"
#define WITH_APP 1
#define WITH_APP_INETSRV 1
#define WITH_APP_SHELL 1
#define WITH_APP_STRINGTESTS 1
#define WITH_APP_TESTS 1
#define WITH_DEV 1
#define WITH_DEV_INTERRUPT_ARM_GIC 1
#define WITH_DEV_TIMER_ARM_GENERIC 1
#define WITH_DEV_VIRTIO 1
#define WITH_DEV_VIRTIO_BLOCK 1
#define WITH_DEV_VIRTIO_GPU 1
#define WITH_DEV_VIRTIO_NET 1
#define WITH_KERNEL 1
#define WITH_KERNEL_VM 1
#define WITH_LIB_AES 1
#define WITH_LIB_AES_TEST 1
#define WITH_LIB_BCACHE 1
#define WITH_LIB_BIO 1
#define WITH_LIB_CBUF 1
#define WITH_LIB_CKSUM 1
#define WITH_LIB_CONSOLE 1
#define WITH_LIB_DEBUG 1
#define WITH_LIB_DEBUGCOMMANDS 1
#define WITH_LIB_FDT 1
#define WITH_LIB_FIXED_POINT 1
#define WITH_LIB_FS 1
#define WITH_LIB_FS_EXT2 1
#define WITH_LIB_FS_FAT32 1
#define WITH_LIB_FS_MEMFS 1
#define WITH_LIB_FS_SPIFS 1
#define WITH_LIB_FS_SPIFS_TEST 1
#define WITH_LIB_GFX 1
#define WITH_LIB_HEAP 1
#define WITH_LIB_HEAP_DLMALLOC 1
#define WITH_LIB_IO 1
#define WITH_LIB_IOVEC 1
#define WITH_LIB_LIBC 1
#define WITH_LIB_LIBM 1
#define WITH_LIB_MINIP 1
#define WITH_LIB_POOL 1
#define WITH_LIB_TFTP 1
#define WITH_LIB_VERSION 1
#define WITH_PLATFORM 1
#define WITH_TARGET 1
#define LK_DEBUGLEVEL 2
#define GLOBAL_INCLUDES "_I__BUILD_QEMU_VIRT_A15_TEST__I__INCLUDE__IEXTERNAL_INCLUDE__ITARGET_QEMU_VIRT_INCLUDE__IPLATFORM_QEMU_VIRT_INCLUDE__IARCH_ARM_ARM_INCLUDE__IARCH_ARM_INCLUDE__ITOP_INCLUDE__IAPP_INCLUDE__IAPP_INETSRV_INCLUDE__IAPP_SHELL_INCLUDE__IAPP_STRINGTESTS_INCLUDE__IAPP_TESTS_INCLUDE__IDEV_INCLUDE__IDEV_INTERRUPT_ARM_GIC_INCLUDE__IDEV_TIMER_ARM_GENERIC_INCLUDE__IDEV_VIRTIO_BLOCK_INCLUDE__IDEV_VIRTIO_GPU_INCLUDE__IDEV_VIRTIO_NET_INCLUDE__IKERNEL_INCLUDE__IEXTERNAL_LIB_AES_INCLUDE__IEXTERNAL_LIB_AES_TEST_INCLUDE__ILIB_CBUF_INCLUDE__IEXTERNAL_LIB_CKSUM_INCLUDE__ILIB_DEBUGCOMMANDS_INCLUDE__IEXTERNAL_LIB_FDT_INCLUDE__ILIB_FS_INCLUDE__ILIB_FS_EXT2_INCLUDE__ILIB_FS_FAT32_INCLUDE__ILIB_FS_MEMFS_INCLUDE__ILIB_FS_SPIFS_INCLUDE__ILIB_FS_SPIFS_TEST_INCLUDE__IEXTERNAL_LIB_LIBM_INCLUDE__ILIB_MINIP_INCLUDE__ILIB_VERSION_INCLUDE__IPLATFORM_INCLUDE__ITARGET_INCLUDE__IDEV_VIRTIO_INCLUDE__IKERNEL_VM_INCLUDE__ILIB_BCACHE_INCLUDE__ILIB_BIO_INCLUDE__ILIB_CONSOLE_INCLUDE__ILIB_DEBUG_INCLUDE__ILIB_FIXED_POINT_INCLUDE__ILIB_GFX_INCLUDE__ILIB_HEAP_INCLUDE__ILIB_HEAP_INCLUDE__ILIB_IOVEC_INCLUDE__ILIB_LIBC_INCLUDE__ILIB_POOL_INCLUDE__ILIB_TFTP_INCLUDE__IEXTERNAL_LIB_HEAP_DLMALLOC_INCLUDE__ILIB_IO_INCLUDE"
#define GLOBAL_COMPILEFLAGS "_G__FINLINE__INCLUDE___BUILD_QEMU_VIRT_A15_TEST_CONFIG_H__W__WALL__WNO_MULTICHAR__WNO_UNUSED_PARAMETER__WNO_UNUSED_FUNCTION__WNO_UNUSED_LABEL__WERROR RETURN_TYPE__FNO_COMMON__MTHUMB_INTERWORK"
#define GLOBAL_OPTFLAGS "_O2"
#define GLOBAL_CFLAGS "__STD GNU11__WERROR_IMPLICIT_FUNCTION_DECLARATION__WSTRICT_PROTOTYPES__WWRITE_STRINGS"
#define GLOBAL_CPPFLAGS "__STD CPP11__FNO_EXCEPTIONS__FNO_RTTI__FNO_THREADSAFE_STATICS"
#define GLOBAL_ASMFLAGS "_DASSEMBLY"
#define GLOBAL_LDFLAGS "__L___LEXTERNAL__Z_MAX_PAGE_SIZE 4096"
#define ARCH_COMPILEFLAGS "__MCPU CORTEX_A15__MFPU VFPV3__MFLOAT_ABI SOFTFP"
#define ARCH_CFLAGS ""
#define ARCH_CPPFLAGS ""
#define ARCH_ASMFLAGS ""
#endif
