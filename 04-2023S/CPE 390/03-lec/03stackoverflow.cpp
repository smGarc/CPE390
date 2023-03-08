#include <iostream>
using namespace std;
int g(int x) { return x * x }

int f(int x) {
  uint32_t
      a[1024 * 1024];  // this line will crash your program LOL for safety
                       // concern reasons with the stack. You have to manually
                       // tell windows tou want more space on the stack.
  int y = g(x);
  return y * 4;
}

int main() {
  int y = f(3);
  cout << y;
}