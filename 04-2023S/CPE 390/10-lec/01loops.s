.globl main
main:
    call countup
    call countdown
    call mask1
    call mask2
    call mask3
    ret

# rcx = number of times to count
# count from 1 to rcx
countup:
    # mov $0, %rsi
    push %rsi
    xor %rsi, %rsi # also 0
    cmp $0, %rcx
    jle countupout
  countuploop:
    add $1, %rsi 
    cmp %rcx, %rsi
    jle countuploop
  countupout:
    pop %rsi
    ret

# rcx = number of times to count
# count from 1 to rcx
countdown:
    sub $1, %rcx
    jnz countdown
    ret

# anything AND 0 = 0
# anything AND 1 = anything
# rcx = 64-bit number
# rdx = mask
# zero out any bits for which the mask = zero
mask1:
    mov $rdx, %rax
    and %rcx, %rax
    ret

# rcx = 64-bit number
# rdx = mask
# zero out any bits for which the mask = 1
mask2:
    mov %rdx, %rax
    or % rcx, %rax
    ret

# rcx = 64-bit number
# rdx = mask
# toggle any bits for which the mask = 1
mask3:
    mov %rcx, %rax
    xor %rdx, %rax
    ret