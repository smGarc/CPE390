#include <iostream>
uint64_t sum(uint64_t a[], int64_t n);
void zero(uint64_t a[], int64_t n);

int main() {
  uint64_t a[10] = {9, 7, 3};  // all the rest are zero
  uint64_t b[100];             // has all garbage
  uint64_t c[1024];            // 8k = 8192 1024 2048 4096 8192 163841 32768
  // uint64_t d[1024 * 1024]; //this crashes lol it's bigger than the stack
  uint64_t s = sum(a, 10);
  std::cout << s << '\n';
  s = sum(b, 100);
  std::cout << s << '\n';
  zero(b, 100);
}
