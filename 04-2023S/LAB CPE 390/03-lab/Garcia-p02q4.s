.globl main
  # Author: Simon Garcia

main:
  mov $0xDEADBEEF12345678, %rax
  mov $0xABBAF0BB0BBE98D1, %rbx 

  mov %rbx, %rcx
  and %rax, %rcx

  mov %rbx, %rdx
  or %rax, %rdx

  mov %rbx, %rsi
  xor %rax, %rsi

  # rcx = 0x8aa8b0ab02341050
  # rdx = 0xffbffeff1bbedef9
  # rsi = 0x75174e54198acea9


  ret
