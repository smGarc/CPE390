# Intel Instruction set Summary

## registers
Q: What is a register?
A: Fastest memory on your computer, on chip

On intel (64 bit: 16 64 bit registers)

rax rbx rcx rdx rsi(source index) rdi(destination index) rbp rsp(can't use rsp, reserved for special things)
r8 r9 r10 r11 r12 r13 r14 r15

x = (y*z+w)/2

%rax = 64 bit register
%eax = 32 bit lower half of rax
%ax = 16 bit lower half of eax