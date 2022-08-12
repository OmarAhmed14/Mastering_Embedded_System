/* 
linker_script_cortex_m3.ld
Author: Omar Ahmed 
*/


MEMORY 
{
	FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 128k
	SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 20k
}
SECTIONS
{
	.text :
	{
	  *(.vectors*)
	  *(.text*)
	  *(.rodata)
	}>FLASH
	
	.data :
	{
		*(.data)
	}>FLASH

	.bss :
	{
		*(.bss)
	}>SRAM




}