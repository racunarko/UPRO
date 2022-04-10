#include <stdio.h>

_Bool jestParan(unsigned int n);
_Bool jestNeparan(unsigned int n);

_Bool jestNeparan(unsigned int n) {
   _Bool jeNeparan = n == 0 ? 0 : jestParan(n - 1);
   return jeNeparan;
}

_Bool jestParan(unsigned int n) {
   _Bool jeParan = n == 0 ? 1 : jestNeparan(n - 1);
   return jeParan;
}

int main(void) {
   unsigned int n;
   scanf("%u", &n);
   if (jestParan(n)) {
      printf("%u je paran", n);
   } else {
      printf("%u je neparan", n);
   }
   return 0;
}