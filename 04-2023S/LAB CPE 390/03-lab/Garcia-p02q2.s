.globl main
  # Author: Simon Garcia

main:
  # set variables
  mov $5, %rax
  mov $7, %rbx
  mov $9, %rcx

  # %rdx = %rax + %rbx -> 12 = 5 + 7
  leaq (%rax, %rbx), %rdx
  
  # %rsi = %rax * %rcx -> 45 = 5 * 9
  mov %rax, %rsi
  mul %rcx
  xchg %rax, %rsi

  # %rdi = %rbx - %rax -> 2 = 7 - 5
  mov %rbx, %rdi
  sub %rax, %rdi 

  
  # %rax = %rsi / %rdi -> 22 = 45 / 2
  mov %rsi, %rax
  mov %rdi, %rcx
  div %rcx

	ret
  