.globl main

main:
mov $0x2B, %rcx
mov $0xF3, %rdx
and %rcx, %rdx
or %rcx, %rdx
xor %rcx, %rdx
not %rdx

shr $1, %rdx
shl $5, %rdx

mov $23, %rsi  # 0000000...10111 <- 64 total bits
ror $3, %rsi   # 1110000...00010
rol $5, %rsi
mov %640, %rdx # <-by zero lol 
mov $24, %rdx
rol %rdx, %rsi #