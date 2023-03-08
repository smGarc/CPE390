#include <iostream>
uint64_t f1(int a, int b) { return a + b; }

uint64_t f2(int a, int b) { return a - b; }

uint64_t f3(int a, int b) { return a * b; }

uint64_t f4(int a, int b) { return a / b; }

int main() {
  f1(1, 2);
  f2(1, 2);
  f3(1, 2);
  f4(1, 2);
  return 0;
}
//-02 turns on optimization
//-s says don't make a program just make assembly code

/*
ax, bx, cx, dx <<- beginning of the modern era of intel stuff, 8 bit
the x stood for extended(?)
then they expanded more so they started naming stuff:
eax ebx ecx edx rax rbx rcx rdx <<- r stood for register

movq %rcx, %rax  ->> # %rax = %rcx
subq %rdx, %rax ->> # %rax = %rax - %rdx  %rax = %rcx - %rdx
*/