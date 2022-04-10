#include <stdio.h>

int main() {
   int n = 2, prim, brojIspisanih, djelitelj;
   while (brojIspisanih < 25) {
      prim = 1;
      for (djelitelj = 2; djelitelj <= n / 2; djelitelj++) {
         if (n % djelitelj == 0) {
            prim = 0;
            break;
         }
      }
      if (prim) {
         printf("%d\n", n);
         brojIspisanih++;
      }
      n++;
   }
   return 0;
}