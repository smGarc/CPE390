#include <bitset>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
/*
  Original File: main.cpp on Lab_02 Github Repository, Fan Yang
  Contributer: Simon Garcia
*/

int lcmCalc(int a, int b) {
  bool pF = false;
  int f = 1;
  while (pF == false) {
    if (a % 2 == 0 || b % 2 == 0) {
      if (a % 2 == 0) {
        a /= 2;
      }
      if (b % 2 == 0) {
        b /= 2;
      }
      // cout << " /2 -->> a=" << a << " b=" << b;
      f *= 2;
      // cout << ", f = " << f << "\n";
    } else if (a % 3 == 0 || b % 3 == 0) {
      if (a % 3 == 0) {
        a /= 3;
      }
      if (b % 3 == 0) {
        b /= 3;
      }
      // cout << " /3 -->> a=" << a << " b=" << b;
      f *= 3;
      // cout << ", f = " << f << "\n";
    } else if (a % 5 == 0 && a != 0) {
      if (a % 5 == 0) {
        a /= 5;
      }
      if (b % 5 == 0) {
        b /= 5;
      }
      // cout << " /5 -->> a=" << a << " b=" << b;
      f *= 5;
      // cout << ", f = " << f << "\n";
    } else if (a % 7 == 0 && a != 0) {
      if (a % 7 == 0) {
        a /= 7;
      }
      if (b % 7 == 0) {
        b /= 7;
      }
      f *= 7;
    } else {
      pF = true;
    }
  }
  // cout << "f=" << f * a * b << "\n";
  return f * a * b;
}

int gcd(int a, int b) {
  int prod = a * b;
  int lcm = lcmCalc(a, b);
  return (prod / lcm);
}

int isPrime(int a) {
  // 1, 2, 3, 5, 7, 11, 13, 17
  if (a == 1 || a == 2 || a == 3 || a == 5 || a == 7) {
    return true;
  } else if (a % 2 != 0 && a % 3 != 0 && a % 5 != 0 && a % 7 != 0) {
    return true;
  } else {
    return false;
  }
};

int countPrimes(int a, int b) {
  int counter = 0;
  for (int i = a; i <= b; i++) {
    if (isPrime(i) == true) {
      counter++;
    }
  }
  return counter;
};

// float
float sum_forward(int n) {
  float sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += 1.0f / i;
  }
  return sum;
}

float sum_backward(int n) {
  float sum = 0;
  for (int i = n; i >= 1; i--) {
    sum += 1.0f / i;
  }
  return sum;
}

double hypot(double a, double b) {
  a *= a;
  b *= b;
  return sqrt(b + a);
}

// array
void double_each(int a[], int n) {
  for (int i = 0; i < n; i++) {
    a[i] *= 2;
  }
}
float mean(float x[], int n) {
  float sum = 0;
  for (int i = 0; i < n; i++) {
    sum += x[i];
  }
  return sum / n;
}
int prod(int x[], int n) {
  int prod = 1;
  for (int i = 0; i < n; i++) {
    prod *= x[i];
  }
  return prod;
}

int main() {
  //------------------------integer part
  cout << "Part 1 Output:" << endl;
  cout << "gcd(12, 18)=" << gcd(12, 18) << endl;
  cout << "gcd(1025, 3025)=" << gcd(1025, 3025) << endl;
  cout << "isPrime(5)=" << isPrime(5) << endl;
  cout << "isPrime(9)=" << isPrime(9) << endl;
  cout << "isPrime(1001)=" << isPrime(1001)
       << endl;  // These were the wrong values
  cout << "isPrime(2601)=" << isPrime(2601) << endl;  // I fixed them
  cout << "isPrime(1013)=" << isPrime(1013) << endl;
  cout << "countPrimes(1,100): " << countPrimes(1, 100) << endl;
  cout << "countPrimes(1,10000): " << countPrimes(1, 10000) << endl;

  //------------------------floating point number part
  cout << "Part 2 Output:" << endl;
  float ans_1 = sum_forward(100);
  float ans_2 = sum_backward(100);
  cout << setprecision(8) << ans_1 << endl;
  cout << setprecision(8) << ans_2 << endl;
  cout << "hypot(3,4)=" << hypot(3, 4) << endl;  // should print 5
  cout << "hypot(4,5)=" << hypot(4, 5) << endl;

  //------------------------array part
  cout << "Part 3 Output:" << endl;
  float x[] = {10, 20, 30, 40, 50, 60};
  int n = sizeof(x) / sizeof(float);
  cout << mean(x, n) << endl;  // should print 35
  float y[] = {1.0, 2.0, 3.0, 4.0};
  cout << mean(y, sizeof(y) / sizeof(float)) << endl;  // should print 2.5
  int z[] = {10, 20, 30, 40, 50, 60};
  int z_len = sizeof(z) / sizeof(int);
  double_each(z, z_len);
  for (int i = 0; i < z_len; i++) {
    cout << z[i] << ",";
  }
  cout << endl;
  int a[] = {3, 4, 1, 2, -2};
  cout << prod(a, sizeof(a) / sizeof(int)) << endl;
  int b[] = {2, 4, 8, -2, -4};
  cout << prod(b, sizeof(b) / sizeof(int)) << endl;

  return 0;
}
