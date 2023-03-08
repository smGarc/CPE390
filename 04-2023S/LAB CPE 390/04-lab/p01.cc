#include <bitset>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
/*
  Author: Simon Garcia

  OUTPUT:
  Question 1-----------------------------------
  H E L L O
  Question 2-----------------------------------
  00000000111111111000000000000000
  Question 3-----------------------------------
  r=11111111 g=10000000 b=00000000
  Question 4-----------------------------------
  packed array a1=7101806
  Question 5-----------------------------------
  packed array a2=65258284011

*/
void crypt(char x[], int n, uint8_t key) {
  for (int i = 0; i < n; i++) {
    x[i] ^= key;
  }
}

uint32_t color(uint8_t r, uint8_t g, uint8_t b) {
  return (r << 16) + (g << 8) + b;
}

void extractrgb(uint32_t color, uint8_t& r, uint8_t& g, uint8_t& b) {
  b = color;
  g = color >> 8;
  r = color >> 16;
}

uint32_t compress2(const uint32_t x[], uint32_t len) {
  uint32_t y = 0;
  for (int i = 0; i < len; i++) {
    y <<= 2;
    y += x[i];
  }
  return y;
}

uint64_t compress3(const uint32_t x[], uint32_t len) {
  uint64_t y = 0;
  for (int i = 0; i < len; i++) {
    y <<= 3;
    y += x[i];
  }
  return y;
};

int main() {
  cout << "Question 1-----------------------------------" << endl;
  char a[6] = "hello";
  crypt(a, 5, 32);
  for (int i = 0; i < 5; i++) {
    cout << a[i] << " ";
  }
  cout << '\n';
  cout << "Question 2-----------------------------------" << endl;
  uint32_t c = color(0xFF, 0x80, 0x00);  // should be 0xFF8000
  cout << bitset<32>(c) << '\n';

  cout << "Question 3-----------------------------------" << endl;
  uint8_t r, g, b;
  extractrgb(c, r, g, b);
  cout << "r=" << bitset<8>(r) << " g=" << bitset<8>(g) << " b=" << bitset<8>(b)
       << '\n';

  cout << "Question 4-----------------------------------" << endl;
  const uint32_t a1[] = {1, 2, 3, 0, 1, 1, 3, 1, 1, 2, 3, 2};
  uint32_t packed1 = compress2(a1, 12);
  cout << "packed array a1=" << packed1 << '\n';

  cout << "Question 5-----------------------------------" << endl;
  const uint32_t a2[] = {0, 7, 4, 6, 1, 5, 4, 4, 6, 1, 7, 5, 3};
  uint64_t packed2 = compress3(a2, 13);
  cout << "packed array a2=" << packed2 << '\n';
  cout << endl;

  return 0;
}
