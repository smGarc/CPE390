.globl main

# %rcx is location of an arr (block of memoty)
# %rdx is number of elements in arr
writemem:
    xor %r8, %r8 # now 0

  # writes 0s to an entire arr
  writemem1: 
    movq %r8, (%rcx) # instuction ambiguous, wanna move 0 to rcx   
    add $8, %rcx # it's 8 bites bc it's a quad
    sub $1, %rdx
    jne writemem1

    ret

main:
    call writemem
    ret
