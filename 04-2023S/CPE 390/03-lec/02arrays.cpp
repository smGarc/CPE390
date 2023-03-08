#include <iostream>

int main() {
  int a;         // 32-bits on my machine 4 bytes
  uint64_t = b;  // 64-bits 8 bytes
  float c;       // 32-bits 4 bytes
  double d;      // 64-bits 8 bytes

  int e[10];  // single continuous block of 10 ints
  double f[100];

  uint32_t x[3][4];    // 3*4*4 bytes = 48 bytes
  uint32_t y[100][5];  // 500*4 bytes = 2000 bytes
  // arduino uno only has 2Kb LOL so you already take up all the memory on it
  // with array y[]
  std::cout << a;
  std::cout << b;
  std::cout << c;
  std::cout << d;
  std::cout << e[0];
  std::cout << f[0];
}