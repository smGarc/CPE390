# Author: Simon Garcia
.globl main
main:
	mov	$0x12345678FEDCBA9, %rcx
	mov	$0x00000000F0F000F, %rdx
	call	f
	ret

	.globl f
f:
  mov %rcx, %rax
  not %rdx
  and %rdx, %rax
  ret
# Result: rax   0x123456780e0cba0   81985529068964768
