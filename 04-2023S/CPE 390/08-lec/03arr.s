.globl _Z4zeroPjj
# rcx points to arr, edx length of how many
_Z4zeroPjj:
      xor %rdi, %rdi # %rdi = 0
    loop:  
      mov %edi, (%rcx) # write a zero to ea element in arr
      add $4, %rcx
      sub $1, %edx
      cmp $0, %edx
      jne loop