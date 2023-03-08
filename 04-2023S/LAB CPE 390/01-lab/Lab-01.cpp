#include <iostream>
using namespace std;
double product(const int a[], int n) {
  double prod = 1;
  for (int i = 0; i < n; i++) {
    prod *= a[i];
  }
  return prod;
}

int main() {
  int a[] = {5, 3, 1, 9};
  double z = product(a, 4);  // 135 is the answer
  cout << z << "\n";
  return 0;
}