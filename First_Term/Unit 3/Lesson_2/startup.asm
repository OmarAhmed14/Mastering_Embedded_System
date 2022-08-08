
startup.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <reset>:
   0:	e3a0da11 	mov	sp, #69632	; 0x11000
   4:	ebfffffe 	bl	0 <main>

00000008 <stop>:
   8:	eafffffe 	b	8 <stop>

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002141 	andeq	r2, r0, r1, asr #2
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000017 	andeq	r0, r0, r7, lsl r0
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	; 0x239
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	Address 0x00000020 is out of bounds.

