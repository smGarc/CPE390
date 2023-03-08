#include <iostream>
int main() {
  /*
  A B  AORB
  0 0   0
  0 1   1
  1 0   1
  1 1   1

  0010 1011 <- 2B
  1101 0100 <- ~2B
  =========
  1111 1111
  */

  uint32_t a = 0x2B | ~0x2B;  // 0x0000002B | 0xFFFFFFD4 (2 = 0010 -> 1101 = D)
                              // (B = 1011 -> 0100 = 4)
  uint64_t b = 0x2B | ~0x2B;  // 0x00000000FFFFFFFF <- On the FINAL probably
  uint64_t b = 0x2BULL | ~0x2BULL;  // 0xFFFFFFFFFFFFFFFF

  // & is bitwise AND
  uint64_t d = 0x2B & ~0x2B;  // 0x00000000

  int a = 5 && 6;  // just gonna do true and true = true

  //&& is boolean, logical AND
  int x = 3, y = 4;
  if (x < 3 && y < 5) {
    cout << "yes";
  }

  // ^ is XOR
  // x=3 011, y=4 100
  x = x ^ y;  // x = 111 = 7
  y = y ^ x;  // y = 011 = 3
  x = x ^ y;  // x = 100 = 4
  // Able to switch them without needing a third variable :)
  x = x ^ x;  // x = 0

  //<< <- leftshift
  x = 1 << 3;  // x = 8 00000000001 -> 00000001000 multiply by 2^3
  x <<= 2;     // x=32 multiply by 4
  x >>= 3;     // divide by 8
  x >>= 5;     // x=0, it pushed it off the right, no wrap around

  uint64_t m = 23;
  m = (m >> 3) | (m << 61);  // ror 3
}