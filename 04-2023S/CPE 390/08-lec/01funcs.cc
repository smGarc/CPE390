#include <cstdint>
using namespace std;
#if 0  //    rcx          rdx         r8          r9         stack
uint64_t f(uint64_t a, unint64_t b, uint64_t c, unint64_t d, uint64_t e)

                  xmm0      xmm1      rcx       rdx
void rect2polar(double x, double y, double r, double& theta)
#endif

void zeroByRef(uint64_t& a, uint64_t& b) {
  a = 0;
  b = 0;
}

void zero(uint64_t a, uint64_t b) {
  a = 0;
  b = 0;
}

//  x/xg $rdx   <- prints full 64 bit rdx number on gdb