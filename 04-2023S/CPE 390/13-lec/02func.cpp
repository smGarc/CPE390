#include <math.h>

#include <iostream>

double hypot(double x, double y) { return sqrt(x * x + y * y); }

int main() {
  double a, b;
  std::cin >> a, b;
  std::cout << hypot(a, b);
}