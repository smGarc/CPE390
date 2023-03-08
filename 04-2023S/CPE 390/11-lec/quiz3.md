```asm
main:
mov $3, %rcx
mov $5, %rdx
call f
mov %rcx, %rax
and %rdx, %rax

f:
leaq (%rcx, %rdx), %rax
ret
```
push -> subtract 8 to the pointer and write
pop -> take out of stack and add 8 to pointer