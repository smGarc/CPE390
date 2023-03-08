#include <iostream>
using namespace std;

void zero(uint64_t a, uint64_t b);
void zeroByRef(uint64_t& a, uint64_t& b);

int main() {
  uint64_t x = 99, y = 88;
  cin >> x;
  cout << ", ";
  cin >> y;
  cout << "\n";

  zero(x, y);
  cout << x << ", " << y << "\n";

  zeroByRef(x, y);
  cout << x << ", " << y << "\n";
}