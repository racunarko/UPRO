#include <stdio.h>

int main() {
   int i, j, k, brojac = 0;
   for (i = 1; i <= 100; i++) {
      for (j = 1; j <= 100; j++) {
         for (k = 1; k <= 100; k++) {
            if (i * i + j * j == k * k) {
               brojac++;
               printf("%d. trojka: %d^2 + %d^2 = %d^2\n", brojac, i, j, k);
            }
         }
      }
   }
   return 0;
}