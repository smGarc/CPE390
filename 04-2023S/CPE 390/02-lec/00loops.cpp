#include <iostream>
using namespace std;
// Gateway south 024 <<- C++ Class

int main() {
  int a = 1;
  while (a <= 10) {
    cout << a << "hello ";  // hello\0 <-- in C
    a++;                    // a+=1; a=a+1; ++a;
  }
  cout << "\n";
  for (int i = 1; i <= 10; i++) {
    cout << i << ' ';
  }
  cout << "\n";
}

// gdb debugger
/*
  msys can run these but can't run layout src
  gdb 00loops.exe
  b main  <<- breakdown main
  r <<- run
  p a <<- print a
  n <<- next line
  b 9 <<- breakpoint at line 9
  c 8 <<- continuing 8 times
  disp i <<- display i
  quit <<- quit debugger

  in cmd prompt, same but
  b main
  r
  layout src <<- makes it graphically helpful!!!
  layout asm <<- same but for assembler
  layout reg <<- register
  ni <<- next instruction

  gdb commands-- look up on google, also on github
  github.com/linuxcrashcourse

  time ./program
  g++ -O2 <<- Optimizing
  p 1 << 31

  __asm("nop") <<- does nothing but allows you to debug without having an
  operation in a loop
*/

/*
  data variables
  signed goes from negative to positive, breaks it in half. positive one minus
  abs val negative uint8_t a = 0 .. 255 uint16_t b = 0 .. 65535 int8_t c = -128
  .. 127

  short = 16 bits
  0..2^16-1 = 65535
  -32768 .. 32767
*/
// for (short i = 1; i <= 100000; i++) sum += i;
// wouldn't run because short can only go up to 32767

// Homework:
uint64_t prod(int a, int b) {}

uint64_t sum(int a, int b) {}

uint64_t choose(int n, int r) {}  // n! / (r!(n-r)!)
                                  // choose(52,6) = 52! / (6! 46!) = 12.5million