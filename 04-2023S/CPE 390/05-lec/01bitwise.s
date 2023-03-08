.globl main
main:
    mov $52, %rax   # 00110100 ->> 32 + 16 !+8 + 4 !+2 !+1
                    # Hex: 0x34
    mov $37, %rbx   # 00100101 ->> 32 !+16 !+8 + 4 !+2 + 1
                    # Hex: 0x25

    mov %rbx, %rcx
    and %rax, %rcx  # 00100100 = 0x24  C++: x & y

     mov %rbx, %rdx
     or %rax, %rdx  # 00110101 = 0x35  C++: x | y

     mov %rbx, %rsi
     xor %rax, %rsi # 00010001 = 0x11  C++: x ^ y

     not %rsi       # 11101110 = 0xEE  C++: ~x

     # 0x2B | ~ 0x2B == 0xFF
     # 00101011
     # 11010100
     # ========
     # 11111111 

     mov $0xDEADBEEF, %rdx
     mov $0xFACEFEED, %rdx # rdx = _____________
     ret
# x + 0 = x
# x * 0 = 0
# x * 1 = x

xor %rax, %rax # %rax == 0 anything xor'd with itself is 0
# thats the most common way to cancel out registers
# suppose register %rbx = 1010101010101010101010xxx
# make all the x bits 0
mov $ 0xFFFFFFFFFFFFFFFF, $rdi
and %rdi, $rbx # rbx is left alone, does not change
mov $ 0xFFFFFFFFFFFFFFF8, $rdi # last 3 digits are zero
and %rdi, $rbx # rbx now has last 3 digits zero

# suppose %rbx = 10 1010 10xx 100x x010 1xxx 
#                        1100 1110 0100 1000
# make all the x bits 0
mov $0xFFFFFFFFFFFFCE78, %rdi
and %rdi, %rbx

# suppose %rbx = 10 1010 10xx 100x x010 1xxx 
#                        0011 0001 1000 0111
#                         3    2    8    7
# make all the x bits 1
mov $0x0000000000003187, %rdi
or %rdi, %rbx
