    .globl _Z3sumPyy
# rcx = location of array in memory
# rdx = length
_Z3sumPyy:
    xor %rax, %rax # sum = 0
    cmp $0, %rdx
    je sumout
  sumloop:
    add (%rcx), %rax
    add $8, %rcx # move over to next spot, with a 64-int each number is 8 bites
    # do array stuff
    sub $1, %rdx
    jnz sumloop
  sumout:
    ret

# rcx = location of array in memory
# rdx = length
_Z4sum2Pyy:
    //rcx, rdx, r8, r9 <- can be used without being pushed to stack
    xor %rax, %rax # sum = 0
    xor %r8, %r8 # i = 0
    cmp $0, %rdx
    je sumout2
  sumloop2:
    add (%rcx, %r8), %rax
    add $1, %r8
    # do array stuff
    sub $1, %rdx
    jnz sumloop2
  sumout2:
    ret

# rcx = location of array in memory
# rdx = length
_Z4sum3Pyy:
    //rcx, rdx, r8, r9 <- can be used without being pushed to stack
    xor %rax, %rax # sum = 0
    xor %r8, %r8 # i = 0
    cmp $0, %rdx
    je sumout3
  sumloop3:
    add (%rcx, %r8, 8), %rax
    add $1, %r8
    # do array stuff
    sub $1, %rdx
    jnz sumloop3
  sumout3:
    ret

.globl _Z4zeroPyy
_Z4zeroPyy:
    ret
