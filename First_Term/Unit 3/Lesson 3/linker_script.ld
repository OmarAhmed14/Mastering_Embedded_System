/* 
linker_script_cortex_m3.ld
Author: Omar Ahmed 
*/


MEMORY 
{
	flash(RX) : ORIGIN = 0x08000000, LENGTH = 128k
	sram(RWX) : ORIGIN = 0x20000000, LENGTH = 20k
}
SECTIONS
{
	.text :
	{
	  *(.vectors*)
	  *(.text*)
	  *(.rodata)
	}>flash
	
	.data :
	{
		*(.data)
	}>flash

	.bss :
	{
		*(.bss)
	}>sram

}