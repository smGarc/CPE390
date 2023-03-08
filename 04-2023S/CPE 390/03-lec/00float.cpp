#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  uint8_t a = 255;  // 11111111
  uint32_t b = 4'200'000'000;
  float f = 1.2345678f;  // 32 bits
  f = 12.345678f;
  f = 1.2345678e+38f;  // can represent huge numbers, just not all the digits
  f = 1.2345678e-38f;  // because we don't have enough bits
  // never use float LOL it can overflow and lie, its an approx. and can
  // sometimes mess the hell up its usually more important to be right than
  // faster
  /*
    sign = 1 0/1
    exponent = 8-bits = where is the binary place
    mantissa = 24-bits = digits of the number
          1 + whatever you got 1xxxxxxxxxxxxxxxxxxxxxxx
          101 = 00000101
          93 = 000000093
          doin same thing in floating point
    3 = 11.0   7 = 111
    1.5 ->>  1.1
    1.25 ->> 1.01
    1.125->> 1.001
    4.5 ->>  100.1

    0 01111111 00000000000000000000000
             1.00000000000000000000000
             10.0000000000000000000000
    uint8_t = 0..255
    int8_t = -128..127
  */
  double d = 1.23456789012345;
  // ieee-754 floating point converter
}