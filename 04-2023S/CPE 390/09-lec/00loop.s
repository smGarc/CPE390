    .globl main
# Write loop that counts from 0 to 1 billion-1
loop1:
    # xor %rax, %rax
    mov $0, %rax
    mov $8000000000, %rcx
  # 1: could work here as a bookmark if we were on ARM, b not on intel
  loop1a:
    add $1, %rax

    # Compare function does subtraction but doesn't stroe it anywhere
    cmp %rcx, %rax # %rax - 1 billion
    # Z=1, if result 0 (equal) >> S=0, if result neg (not equal) >> C= >> O=
    #   0,                              sign,                      carry, overflow
    # jump if condition code, also jne, and other j-- cmds 
    jne loop1a # the loop will never end bc $0 is moved to %rax in the beginning of the loop
    
    ret

# Write loop that counts from 1 billion down to 0
loop2:
    mov $1000000000, %rcx
  loop2a:
    sub $1, %rcx
  # cmp $0, %rcx  we can technically comment this out because we're already trying to get to zero
    # so like if it's equal to zero the Z-value would be zero anyway(?)
    jg loop2a
    ret

f:
    add %rcx, %rcx # %rcx = 2%rcx (we're allowed)
    mov %rcx, %rax
    ret

# Write function that calls function f(i)
# for i = 1 to 100
loop3:
  # sub $8, %rsp
    mov $1, %rcx 
  loop3a:
  # mov %rcx, (%rsp) # save it to stack
    push %rcx # better save, how to quickly save stuff to the stack, quick and dirty
    call f
    pop %rcx # better restore
  # mov (%rsp), %rcx # restore it
    add $1, %rcx
    cmp $100, %rcx
    jle loop3a # jle = "<="
  # add $8, %rsp

    ret

loop4:
    push %r10
    mov $1, %r10 # if we use r10, its not allowed to get trashed
    # but we're not allowed to trash r10 either LOL so we have to save whats in it first 
    # by using push and pop again!
  loop4a:
    call f
    add $1, %rcx
    cmp $100, %rcx
    jle loop4a

    pop %r10
    ret

main:
    call loop1
    call loop2
    call loop3

  ret

# every cpu comes with its own rules, intel and arm are different.
# Windows does a bunch of different stuff than guys like linux just cuz
# they developed with intel  
