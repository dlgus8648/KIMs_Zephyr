#define CONFIG_SERIAL 1
#define CONFIG_I2C 1
#define CONFIG_NUM_IRQS 86
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 96000000
#define CONFIG_FLASH_SIZE 512
#define CONFIG_FLASH_BASE_ADDRESS 0x8000000
#define CONFIG_MP_MAX_NUM_CPUS 1
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 10000
#define CONFIG_ROM_START_OFFSET 0x0
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_BUILD_OUTPUT_BIN 1
#define CONFIG_PINCTRL 1
#define CONFIG_XIP 1
#define CONFIG_MAIN_STACK_SIZE 1024
#define CONFIG_IDLE_STACK_SIZE 320
#define CONFIG_HAS_FLASH_LOAD_OFFSET 1
#define CONFIG_CPU_HAS_ARM_MPU 1
#define CONFIG_TICKLESS_KERNEL 1
#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 1024
#define CONFIG_CLOCK_CONTROL 1
#define CONFIG_CORTEX_M_SYSTICK 1
#define CONFIG_CLOCK_CONTROL_INIT_PRIORITY 1
#define CONFIG_GEN_IRQ_VECTOR_TABLE 1
#define CONFIG_GEN_ISR_TABLES 1
#define CONFIG_TIMESLICE_SIZE 0
#define CONFIG_FLASH_LOAD_OFFSET 0x0
#define CONFIG_HW_STACK_PROTECTION 1
#define CONFIG_GPIO 1
#define CONFIG_DCACHE_LINE_SIZE 32
#define CONFIG_RESET 1
#define CONFIG_ARCH_SW_ISR_TABLE_ALIGN 4
#define CONFIG_BUILD_OUTPUT_HEX 1
#define CONFIG_UART_USE_RUNTIME_CONFIGURE 1
#define CONFIG_SERIAL_INIT_PRIORITY 50
#define CONFIG_COMMON_LIBC_MALLOC_ARENA_SIZE -1
#define CONFIG_SOC_TOOLCHAIN_NAME "amd_acp_6_0_adsp"
#define CONFIG_GEN_SW_ISR_TABLE 1
#define CONFIG_REBOOT 1
#define CONFIG_GEN_IRQ_START_VECTOR 0
#define CONFIG_SRAM_OFFSET 0x0
#define CONFIG_CONSOLE 1
#define CONFIG_ARCH_IRQ_VECTOR_TABLE_ALIGN 4
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_ICACHE_LINE_SIZE 32
#define CONFIG_PRIVILEGED_STACK_SIZE 1024
#define CONFIG_DT_HAS_ADI_ADXL345_ENABLED 1
#define CONFIG_DT_HAS_ARDUINO_HEADER_R3_ENABLED 1
#define CONFIG_DT_HAS_ARM_ARMV7M_SYSTICK_ENABLED 1
#define CONFIG_DT_HAS_ARM_CORTEX_M4F_ENABLED 1
#define CONFIG_DT_HAS_ARM_V7M_NVIC_ENABLED 1
#define CONFIG_DT_HAS_FIXED_CLOCK_ENABLED 1
#define CONFIG_DT_HAS_GPIO_KEYS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_LEDS_ENABLED 1
#define CONFIG_DT_HAS_MMIO_SRAM_ENABLED 1
#define CONFIG_DT_HAS_SOC_NV_FLASH_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_EXTI_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_FLASH_CONTROLLER_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_GPIO_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_HSE_CLOCK_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_I2C_V1_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_NV_FLASH_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_PINCTRL_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_RCC_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_RCC_RCTL_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_RTC_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_SPI_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_UART_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32_USART_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32F4_FLASH_CONTROLLER_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32F4_NV_FLASH_ENABLED 1
#define CONFIG_DT_HAS_ST_STM32F4_PLL_CLOCK_ENABLED 1
#define CONFIG_DT_HAS_ST_MORPHO_HEADER_ENABLED 1
#define CONFIG_DT_HAS_USB_NOP_XCEIV_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_POWER_STATE_ENABLED 1
#define CONFIG_ZEPHYR_ACPICA_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_MODULE 1
#define CONFIG_HAS_CMSIS_CORE 1
#define CONFIG_HAS_CMSIS_CORE_M 1
#define CONFIG_ZEPHYR_CMSIS_DSP_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_NN_MODULE 1
#define CONFIG_ZEPHYR_FATFS_MODULE 1
#define CONFIG_ZEPHYR_ADI_MODULE 1
#define CONFIG_ZEPHYR_ALTERA_MODULE 1
#define CONFIG_ZEPHYR_HAL_AMBIQ_MODULE 1
#define CONFIG_ZEPHYR_ATMEL_MODULE 1
#define CONFIG_ZEPHYR_HAL_ESPRESSIF_MODULE 1
#define CONFIG_ZEPHYR_HAL_ETHOS_U_MODULE 1
#define CONFIG_ZEPHYR_HAL_GIGADEVICE_MODULE 1
#define CONFIG_ZEPHYR_HAL_INFINEON_MODULE 1
#define CONFIG_ZEPHYR_HAL_INTEL_MODULE 1
#define CONFIG_ZEPHYR_MICROCHIP_MODULE 1
#define CONFIG_ZEPHYR_HAL_NORDIC_MODULE 1
#define CONFIG_ZEPHYR_NUVOTON_MODULE 1
#define CONFIG_ZEPHYR_HAL_NXP_MODULE 1
#define CONFIG_ZEPHYR_OPENISA_MODULE 1
#define CONFIG_ZEPHYR_QUICKLOGIC_MODULE 1
#define CONFIG_ZEPHYR_HAL_RENESAS_MODULE 1
#define CONFIG_ZEPHYR_HAL_RPI_PICO_MODULE 1
#define CONFIG_ZEPHYR_HAL_SILABS_MODULE 1
#define CONFIG_ZEPHYR_HAL_ST_MODULE 1
#define CONFIG_ZEPHYR_HAL_STM32_MODULE 1
#define CONFIG_ZEPHYR_HAL_TELINK_MODULE 1
#define CONFIG_ZEPHYR_TI_MODULE 1
#define CONFIG_ZEPHYR_HAL_WURTHELEKTRONIK_MODULE 1
#define CONFIG_ZEPHYR_XTENSA_MODULE 1
#define CONFIG_ZEPHYR_HOSTAP_MODULE 1
#define CONFIG_ZEPHYR_LIBMETAL_MODULE 1
#define CONFIG_ZEPHYR_LIBLC3_MODULE 1
#define CONFIG_ZEPHYR_LITTLEFS_MODULE 1
#define CONFIG_ZEPHYR_LORAMAC_NODE_MODULE 1
#define CONFIG_ZEPHYR_LVGL_MODULE 1
#define CONFIG_ZEPHYR_MBEDTLS_MODULE 1
#define CONFIG_ZEPHYR_MCUBOOT_MODULE 1
#define CONFIG_ZEPHYR_MIPI_SYS_T_MODULE 1
#define CONFIG_ZEPHYR_OPEN_AMP_MODULE 1
#define CONFIG_ZEPHYR_OPENTHREAD_MODULE 1
#define CONFIG_ZEPHYR_PERCEPIO_MODULE 1
#define CONFIG_ZEPHYR_PICOLIBC_MODULE 1
#define CONFIG_ZEPHYR_SEGGER_MODULE 1
#define CONFIG_HAS_SEGGER_RTT 1
#define CONFIG_ZEPHYR_TINYCRYPT_MODULE 1
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_M_MODULE 1
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_A_MODULE 1
#define CONFIG_ZEPHYR_UOSCORE_UEDHOC_MODULE 1
#define CONFIG_ZEPHYR_ZCBOR_MODULE 1
#define CONFIG_ZEPHYR_NRF_HW_MODELS_MODULE 1
#define CONFIG_HAS_STM32CUBE 1
#define CONFIG_USE_STM32_LL_RCC 1
#define CONFIG_USE_STM32_LL_UTILS 1
#define CONFIG_BOARD "nucleo_f411re"
#define CONFIG_BOARD_REVISION ""
#define CONFIG_BOARD_TARGET "nucleo_f411re/stm32f411xe"
#define CONFIG_BOARD_NUCLEO_F411RE 1
#define CONFIG_BOARD_NUCLEO_F411RE_STM32F411XE 1
#define CONFIG_BOARD_QUALIFIERS "stm32f411xe"
#define CONFIG_SOC "stm32f411xe"
#define CONFIG_SOC_SERIES "stm32f4x"
#define CONFIG_SOC_FAMILY "stm32"
#define CONFIG_SOC_FAMILY_STM32 1
#define CONFIG_SOC_SERIES_STM32F4X 1
#define CONFIG_SOC_STM32F411XE 1
#define CONFIG_SWJ_ANALOG_PRIORITY 49
#define CONFIG_GPIO_INIT_PRIORITY 40
#define CONFIG_ARCH "arm"
#define CONFIG_ARCH_HAS_SINGLE_THREAD_SUPPORT 1
#define CONFIG_CPU_CORTEX 1
#define CONFIG_KOBJECT_TEXT_AREA 256
#define CONFIG_ARM_MPU 1
#define CONFIG_ARM_MPU_REGION_MIN_ALIGN_AND_SIZE 32
#define CONFIG_CPU_CORTEX_M 1
#define CONFIG_ISA_THUMB2 1
#define CONFIG_ASSEMBLER_ISA_THUMB2 1
#define CONFIG_COMPILER_ISA_THUMB2 1
#define CONFIG_STACK_ALIGN_DOUBLE_WORD 1
#define CONFIG_RUNTIME_NMI 1
#define CONFIG_FAULT_DUMP 2
#define CONFIG_ARM_STACK_PROTECTION 1
#define CONFIG_FP16 1
#define CONFIG_FP16_IEEE 1
#define CONFIG_CPU_CORTEX_M4 1
#define CONFIG_CPU_CORTEX_M_HAS_SYSTICK 1
#define CONFIG_CPU_CORTEX_M_HAS_DWT 1
#define CONFIG_CPU_CORTEX_M_HAS_BASEPRI 1
#define CONFIG_CPU_CORTEX_M_HAS_VTOR 1
#define CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS 1
#define CONFIG_ARMV7_M_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV7_M_ARMV8_M_FP 1
#define CONFIG_NULL_POINTER_EXCEPTION_DETECTION_NONE 1
#define CONFIG_MPU_STACK_GUARD 1
#define CONFIG_CUSTOM_SECTION_MIN_ALIGN_SIZE 32
#define CONFIG_HAS_SWO 1
#define CONFIG_ARM 1
#define CONFIG_ARCH_IS_SET 1
#define CONFIG_LITTLE_ENDIAN 1
#define CONFIG_SRAM_SIZE 128
#define CONFIG_SRAM_BASE_ADDRESS 0x20000000
#define CONFIG_KOBJECT_DATA_AREA_RESERVE_EXTRA_PERCENT 100
#define CONFIG_KOBJECT_RODATA_AREA_EXTRA_BYTES 16
#define CONFIG_GEN_PRIV_STACKS 1
#define CONFIG_ISR_TABLES_LOCAL_DECLARATION_SUPPORTED 1
#define CONFIG_IRQ_VECTOR_TABLE_JUMP_BY_ADDRESS 1
#define CONFIG_EXCEPTION_DEBUG 1
#define CONFIG_ARCH_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_STACK_PROTECTION 1
#define CONFIG_ARCH_HAS_USERSPACE 1
#define CONFIG_ARCH_HAS_EXECUTABLE_PAGE_BIT 1
#define CONFIG_ARCH_HAS_RAMFUNC_SUPPORT 1
#define CONFIG_ARCH_HAS_NESTED_EXCEPTION_DETECTION 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP_THREADS 1
#define CONFIG_ARCH_SUPPORTS_ARCH_HW_INIT 1
#define CONFIG_ARCH_SUPPORTS_ROM_START 1
#define CONFIG_ARCH_HAS_EXTRA_EXCEPTION_INFO 1
#define CONFIG_ARCH_HAS_THREAD_LOCAL_STORAGE 1
#define CONFIG_ARCH_HAS_SUSPEND_TO_RAM 1
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_ARCH_HAS_CODE_DATA_RELOCATION 1
#define CONFIG_CPU_HAS_FPU 1
#define CONFIG_CPU_HAS_MPU 1
#define CONFIG_MPU 1
#define CONFIG_MPU_REQUIRES_POWER_OF_TWO_ALIGNMENT 1
#define CONFIG_SRAM_REGION_PERMISSIONS 1
#define CONFIG_TOOLCHAIN_HAS_BUILTIN_FFS 1
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_MULTITHREADING 1
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING -127
#define CONFIG_NUM_METAIRQ_PRIORITIES 0
#define CONFIG_THREAD_STACK_INFO 1
#define CONFIG_SCHED_DUMB 1
#define CONFIG_WAITQ_DUMB 1
#define CONFIG_LIBC_ERRNO 1
#define CONFIG_ERRNO 1
#define CONFIG_CURRENT_THREAD_USE_TLS 1
#define CONFIG_BOOT_BANNER 1
#define CONFIG_BOOT_BANNER_STRING "Booting Zephyr OS build"
#define CONFIG_BOOT_DELAY 0
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_BARRIER_OPERATIONS_ARCH 1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_TIMESLICING 1
#define CONFIG_TIMESLICE_PRIORITY 0
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_KERNEL_MEM_POOL 1
#define CONFIG_HEAP_MEM_POOL_SIZE 0
#define CONFIG_SWAP_NONATOMIC 1
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_TIMEOUT_64BIT 1
#define CONFIG_SYS_CLOCK_MAX_TIMEOUT_DAYS 365
#define CONFIG_ARCH_MEM_DOMAIN_SUPPORTS_ISOLATED_STACKS 1
#define CONFIG_MEM_DOMAIN_ISOLATED_STACKS 1
#define CONFIG_TOOLCHAIN_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_THREAD_LOCAL_STORAGE 1
#define CONFIG_TOOLCHAIN_SUPPORTS_STATIC_INIT_GNU 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_LIBC 35
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_SOC_EARLY_INIT_HOOK 1
#define CONFIG_CLOCK_CONTROL_STM32_CUBE 1
#define CONFIG_CLOCK_STM32_HSE_CLOCK 8000000
#define CONFIG_CLOCK_STM32_MCO1_SRC_NOCLOCK 1
#define CONFIG_CLOCK_STM32_MCO2_SRC_NOCLOCK 1
#define CONFIG_CONSOLE_INPUT_MAX_LINE_LEN 128
#define CONFIG_CONSOLE_HAS_DRIVER 1
#define CONFIG_CONSOLE_INIT_PRIORITY 60
#define CONFIG_UART_CONSOLE 1
#define CONFIG_GPIO_STM32 1
#define CONFIG_I2C_STM32 1
#define CONFIG_I2C_STM32_V1 1
#define CONFIG_I2C_STM32_INTERRUPT 1
#define CONFIG_I2C_SAM0_TRANSFER_TIMEOUT 500
#define CONFIG_I2C_INIT_PRIORITY 50
#define CONFIG_INTC_INIT_PRIORITY 40
#define CONFIG_EXTI_STM32 1
#define CONFIG_PINCTRL_STM32 1
#define CONFIG_PINCTRL_STM32_REMAP_INIT_PRIORITY 2
#define CONFIG_RESET_INIT_PRIORITY 35
#define CONFIG_RESET_STM32 1
#define CONFIG_SENSOR 1
#define CONFIG_SENSOR_INIT_PRIORITY 90
#define CONFIG_ADXL345 1
#define CONFIG_ADXL345_TRIGGER_NONE 1
#define CONFIG_SERIAL_HAS_DRIVER 1
#define CONFIG_SERIAL_SUPPORT_INTERRUPT 1
#define CONFIG_UART_STM32 1
#define CONFIG_TIMER_HAS_64BIT_CYCLE_COUNTER 1
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_TICKLESS_CAPABLE 1
#define CONFIG_SYSTEM_TIMER_HAS_DISABLE_SUPPORT 1
#define CONFIG_CORTEX_M_SYSTICK_INSTALL_ISR 1
#define CONFIG_CORTEX_M_SYSTICK_64BIT_CYCLE_COUNTER 1
#define CONFIG_FULL_LIBC_SUPPORTED 1
#define CONFIG_MINIMAL_LIBC_SUPPORTED 1
#define CONFIG_NEWLIB_LIBC_SUPPORTED 1
#define CONFIG_PICOLIBC_SUPPORTED 1
#define CONFIG_PICOLIBC 1
#define CONFIG_HAS_NEWLIB_LIBC_NANO 1
#define CONFIG_COMMON_LIBC_ABORT 1
#define CONFIG_COMMON_LIBC_MALLOC 1
#define CONFIG_COMMON_LIBC_CALLOC 1
#define CONFIG_COMMON_LIBC_REALLOCARRAY 1
#define CONFIG_PICOLIBC_USE_TOOLCHAIN 1
#define CONFIG_PICOLIBC_IO_LONG_LONG 1
#define CONFIG_STDOUT_CONSOLE 1
#define CONFIG_NEED_LIBC_MEM_PARTITION 1
#define CONFIG_SYS_HEAP_ALLOC_LOOPS 3
#define CONFIG_SYS_HEAP_SMALL_ONLY 1
#define CONFIG_ZVFS_OPEN_MAX 4
#define CONFIG_CBPRINTF_COMPLETE 1
#define CONFIG_CBPRINTF_FULL_INTEGRAL 1
#define CONFIG_CBPRINTF_CONVERT_CHECK_PTR 1
#define CONFIG_POSIX_AEP_CHOICE_NONE 1
#define CONFIG_POSIX_OPEN_MAX 4
#define CONFIG_POSIX_PAGE_SIZE 0x40
#define CONFIG_EVENTFD_MAX 0
#define CONFIG_MAX_PTHREAD_COUNT 0
#define CONFIG_MAX_PTHREAD_KEY_COUNT 0
#define CONFIG_MAX_TIMER_COUNT 0
#define CONFIG_MSG_COUNT_MAX 0
#define CONFIG_POSIX_LIMITS_RTSIG_MAX 0
#define CONFIG_POSIX_MAX_FDS 4
#define CONFIG_POSIX_MAX_OPEN_FILES 4
#define CONFIG_TIMER_DELAYTIMER_MAX 0
#define CONFIG_SEM_NAMELEN_MAX 0
#define CONFIG_SEM_VALUE_MAX 0
#define CONFIG_TC_PROVIDES_POSIX_C_LANG_SUPPORT_R 1
#define CONFIG_LIBGCC_RTLIB 1
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_ASSERT_VERBOSE 1
#define CONFIG_LLEXT_EDK_NAME "llext-edk"
#define CONFIG_MEM_ATTR 1
#define CONFIG_HAS_PM 1
#define CONFIG_TIMER_RANDOM_INITIAL_STATE 123456789
#define CONFIG_TOOLCHAIN_ZEPHYR_0_17 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_GNU_EXTENSIONS 1
#define CONFIG_LINKER_ORPHAN_SECTION_WARN 1
#define CONFIG_FLASH_LOAD_SIZE 0x0
#define CONFIG_ROM_END_OFFSET 0x0
#define CONFIG_LD_LINKER_SCRIPT_SUPPORTED 1
#define CONFIG_LD_LINKER_TEMPLATE 1
#define CONFIG_LINKER_SORT_BY_ALIGNMENT 1
#define CONFIG_LINKER_GENERIC_SECTIONS_PRESENT_AT_BOOT 1
#define CONFIG_LINKER_LAST_SECTION_ID 1
#define CONFIG_LINKER_LAST_SECTION_ID_PATTERN 0xE015E015
#define CONFIG_LINKER_USE_RELAX 1
#define CONFIG_LINKER_ITERABLE_SUBALIGN 4
#define CONFIG_LINKER_DEVNULL_SUPPORT 1
#define CONFIG_STD_C99 1
#define CONFIG_TOOLCHAIN_SUPPORTS_GNU_EXTENSIONS 1
#define CONFIG_SIZE_OPTIMIZATIONS 1
#define CONFIG_COMPILER_TRACK_MACRO_EXPANSION 1
#define CONFIG_COMPILER_COLOR_DIAGNOSTICS 1
#define CONFIG_FORTIFY_SOURCE_COMPILE_TIME 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_RUNTIME_ERROR_CHECKS 1
#define CONFIG_KERNEL_BIN_NAME "zephyr"
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_PRINT_MEMORY_USAGE 1
#define CONFIG_BUILD_OUTPUT_STRIP_PATHS 1
#define CONFIG_CHECK_INIT_PRIORITIES 1
#define CONFIG_WARN_DEPRECATED 1
#define CONFIG_ENFORCE_ZEPHYR_STDINT 1
#define CONFIG_LEGACY_GENERATED_INCLUDE_PATH 1