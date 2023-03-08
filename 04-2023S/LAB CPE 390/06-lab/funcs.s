    .globl _Z5counti
_Z5counti:
    mov $1, %rax
  count1:
    add $3, %rax
    cmp %rax, %rcx
    jge count1
    sub $3, %rax
    ret

    .globl _Z5sumsqPKyj
_Z5sumsqPKyj:
    mov %rdx, %r8 # r8 = length
    mov $0, %r9 # r9 = sum
  sumsq1:
    mov (%rcx), %rax # rax = rcxval
    mulq (%rcx) # rcxval * rax->rcxval = rdx = pow(rcx,2)
    add %rax, %r9
    sub $1, %r8
    add $8, %rcx
    cmp $0, %r8
    jnz sumsq1
    mov %r9, %rax
    ret

    .globl _Z4add1Pyj
_Z4add1Pyj:
    addq $1, (%rcx)
    add $8, %rcx
    sub $1, %rdx
    cmp $0, %rdx
    jnz _Z4add1Pyj
    ret
    
    .globl _Z11replaceZeroy
_Z11replaceZeroy:
    mov $0xFFFFF18F, %rdx
    and %rdx, %rcx
    mov %rcx, %rax
    ret

    .globl _Z10replaceOney
_Z10replaceOney:
    mov $0x00000E70, %rdx
    or %rdx, %rcx
    mov %rcx, %rax
    ret

    .globl _Z7togglesy
_Z7togglesy:
    mov $0x00000E70, %rdx
    or %rdx, %rcx
    mov %rcx, %rax
    ret

    .globl _Z8replaceDy
_Z8replaceDy:
    mov %rcx, %rax
    mov $0xF, %r8
    mov $0xD, %r9
    mov $0x3, %rdx
    not %rdx
  check:
    and %rcx, %r8
    cmp %r9, %r8
    je change
    mov $0xF, %r8
    rol $4, %r8
    rol $4, %r9
    rol $4, %rdx
    jne check
  change:
    and %rax, %rdx
    mov %rdx, %rax
    ret
    