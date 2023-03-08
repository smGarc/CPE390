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
  xor %rdx, %rax
  ret
# Result: rax   0x123456780e2cba6   81985529069095846  
  
