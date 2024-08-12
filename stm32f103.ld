/* Linker script for STM32F103C8 */

/* Specify the memory regions */
MEMORY
{
  FLASH (rx)      : ORIGIN = 0x08000000, LENGTH = 64K
  RAM (xrw)       : ORIGIN = 0x20000000, LENGTH = 20K
}

/* Define the sections */
SECTIONS
{
  /* Start of the program */
  .isr_vector :
  {
    KEEP(*(.isr_vector))  /* Interrupt vectors */
  } > FLASH

  .text :
  {
    *(.text*)             /* Code */
    *(.rodata*)           /* Read-only data */
  } > FLASH

  .data : AT (ADDR(.text) + SIZEOF(.text))
  {
    *(.data*)             /* Initialized data */
  } > RAM

  .bss :
  {
    *(.bss*)              /* Uninitialized data */
  } > RAM

  /* end of the program */
  _estack = ORIGIN(RAM) + LENGTH(RAM);
  _edata = .;
  _sbss = .;
  _ebss = .;
}
