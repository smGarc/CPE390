#include <iostream>
using namespace std;
/*
  bit twiddling //hacker subclass or whatever idk
  bit masking
  10101010101010101010101010xxx0100101

  1. make a set of bits = 0
  2. make a set of bits = 1
  3. toggle a set of bits
  4. test whether all bits marked x are 1
  5. test whether any bits marked x are 1
*/

uint32_t clear(uint32_t a, uint32_t mask) {
  // clear whichever bits are in mask
  return a & mask;  // whichever bits in mask are 0 are removed
}

uint32_t set(uint32_t a, uint32_t mask) {
  return a | mask;  // whichever bits in mask are 1 are set
}

uint32_t toggle(uint32_t a, uint32_t mask) {
  return a ^ mask;  // whichever bits in mask are 1 are togglrdd
  /*rubberband mode, in old windows computers when moving a window, instead of
  drawing a rectangle in a different color or whatever it just xor (inverst) the
  color the background was
  */
}

// a =        10101010101010101010100111111
// mask =     00000000000000001111000000000
// a & mask = 00000000000000001010000000000
bool allMaskedBitsSet(uint32_t a, uint32_t mask) { return (a & mask) == mask; }

bool anyMaskedBitsSet(uint32_t a, uint32_t mask) { return (a & mask) != 0; }

int main() {
  uint32_t a = 0x1234ABFD;

  // 0001 0010 0011 0100 1010 1011 1111 1101
  // get rid of 101      xxx
  // 1111 1111 1111 1111 0001 1111 1111 1111
  //=0001 0010 0011 0100 0000 1011 1111 1101 = 12340BFD
  cout << hex << clear(a, 0xFFFFF1FFF);

  // 0001 0010 0011 0100 1010 1011 1111 1101
  //                xx        xx
  // 0001 0010 0011 1100 1010 1111 1111 1101
  cout << hex << set(a, 0x000C0600);

  // 0001 0010 0011 0100 1010 1011 1111 1101
  //                x               xxx xxxx
  // 0000 0000 0000 1000 0000 0000 0111 1111
  cout << hex << toggle(a, 0x0008007F);

  int x = 5;
  for (int i = 0; i < 10; i++) {
    x = 5 - x;
    if (x == 0)
      x = 5;
    else
      x = 0;
  }
}