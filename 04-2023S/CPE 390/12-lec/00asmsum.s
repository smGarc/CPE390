    .globl main

main:
    # Arithmetic Instructions
    add %rax, %rbx          # rbx = rax + rbx
    sub %rax, %rbx          # rbx = rax - rbx
    imul %rax, %rbx         # rbx = rax * rbx (signed?)
    div %rcx                # rax = rdx:rax / rcx   rdx = mod?
    lea (%rax, %rbx), %rcx  # rcx = rax + rbx
    lea $16(%rax, %rbx, $8) %rcx  # rcx = 16 + rax + rbx*8

    # Boolean Instructions
    and %rbx, %rsi          # rsi = rsi AND rbx = rsi & rbx
    or %rbx, %rsi           # rsi = rsi OR rbx (inclusive) = rbi | rsi
    not %rbx                # rbx = NOT rbx = ~rbx
    xor %rax, %rax          # rax = rax XOR rax (which is zero) = rax ^ rax

    # Bitshifting
    shl $5, %rsi          # rsi <<= 5 (multiplay by 32, pow(2,5))
    shl %rax, %rsi        # rsi <<= rax
    shr $3, %rdi          # rdi >>= 3 (divide by 8, pow(2,3))

    # We did not do these, but they're signed bit shifting
    sal $1, %rsi
    sar

    # rotate
    rol $4, %rax      # rotate rax left by 4 bits
    ror $3, %rbx      # rotate rbx right by 3 bits

    mov $17, %ax     # 0000000000010001
    ror $4, %ax      # 0001000000000001
    mov $17, %ax     # 0000000000010001
    shr $4, %rax     # 0000000000000001
    # rotate preserves your bits, but shifting does not

    mov $100, %rcx
loop
    # do this 100 times
    sub $1, %rcx
    jnz loop

    cmp $100, %rax   # computer rax -100
    # jz    rax == 100
    # jnz   rax != 100
    # jl    rax < 100
    # jge   rax >= 100 

    tst %rbx, %rax # compute rax AND rbx
    
    tst $1, %rax  # rax AND 1
    jz  even # rax AND 1 == 0
    jnz odd # rax AND 1 != 0

    