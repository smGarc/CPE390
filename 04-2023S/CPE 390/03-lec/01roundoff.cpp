#include <iostream>
using namespace std;
/*
  1/3 = 0.33333 10 is not evenly divisible by 3
  so why is 1/10 not representable in binary?
  1 ->> 001
  2 ->> 010
  3 ->> 011
  4 ->> 100
  5 ->> 101
  6 ->> 110
  7 ->> 111

  1/2 ->> 1.1
  1/4 ->> 1.01
  1/8 ->> 1.001
  1/10 = (1/5)(1/2) 5 and 2 are coprime
  1/10 = .000110011 <<- you're always losing some at the end and so it steadily
  goes wrong 1/16+1/32  1/256+1/512
*/
int main() {
  // float is just as accurate with integers with whole numbers
  cout << setprecision(8);
  for (float i = 0; i <= 10;
       i += 0.1) {  // 0.1 is a repeating decimal like 0.3333 is for us.
    cout << i << " ";
    cout << '\n';

    float t1 = 70.001;
    float t2 = 70.002;
    float dt = t2 - t1;
    // 0.001 we go from 5 digit accuracy to just like 3. the digit
    // after 1 could be anything subtractive cancellation
    long double x;
  }
  /*
  a+b=b+a (communitivity)
  a+b+c != a+(b+c) (assiciativity)

  1.23
   .0918
 + .0599
  ======

BIG numbers first:
  1.23
 + .09 //18 <<- cuts off 18
  ======
  1.32
 + .0599
  ======
  1.37

SMALL numbers first:
   .0918
 + .0599
  ======
   .1517
 +1.23
  ======
  1.38
  using smaller numbers makes it more accurate because of the number of digits.
  remember this when using floating point
  */

  /*
  Mystery Question:
    mystery = 1/(1*1) + 1/(2*2) + 1/(3*3) + ... + infinity  ~1.64
    sqrt(mystery*6)
  */