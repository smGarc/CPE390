  .globl main
f: 
    push %rcx
    pop %rdx
    ret
main:
    mov $5, %rcx
    mov $11, %rdx
    push %r10
    mov $92, %r10
    call f
    pop %r10
    ret
    