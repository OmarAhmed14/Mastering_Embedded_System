/* startup_cortex_m3.s 
Author: Omar Ahmed */



.section .vectots

.word 0x20001000     // stack_top
.word _reset 
.word _Vector_handler
.word _Vector_handler
.word _Vector_handler
.word _Vector_handler
.word _Vector_handler
.word _Vector_handler
.word _Vector_handler
.word _Vector_handler
.word _Vector_handler



.section .text

_reset:
	bl main
	b .
.thumb_func
_Vector_handler:
	b _reset
	