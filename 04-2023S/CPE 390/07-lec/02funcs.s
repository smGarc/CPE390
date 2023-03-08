# ; int f(int a, int b);
.globl _Z1fii
_Z1fii:
lea (%ecx, %edx), %eax
ret

# ;uint64_t g(uint64_t a, uint64_t b);
.globl _Z1gyy
_Z1gyy:
mov %rcx, %rbx
imul %rdx, %rax
ret

# ;uint64_t h(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e);
.globl _Z1hyyyyy
_Z1hyyyyy:
add %rcx, %rdx
add %rdx, %r8
add %r8, %r9
add 32(%rsp), %r9
mov %r9, %rax

# ;lea(%rcx, %rdx), %rax
# ;lea(%r8, %r9), %rbx
# ;add 32(%rsp), %rbx
# ;add %rbx, %rax
ret

# ;movl -> 32x
# ;movq -> 64x
# ;g++ -o2 -S 
# ;-S compiles to assembler
