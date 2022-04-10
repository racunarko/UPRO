#include <stdio.h>

int main() {
   int i;
   float suma = 0;
   for (i = 1; i <= 1000; i++) {
      if (i % 2 != 0) {
         suma = suma + 1.f / i;
      } else {
         suma = suma - 1.f / i;
      }
   }
   printf("Suma = %f", suma);
   return 0;
}