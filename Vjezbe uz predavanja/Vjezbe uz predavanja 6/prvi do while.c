#include <stdio.h>

int main() {
   int i = 1;
   float suma = 0;
   do {
      if (i % 2 != 0) {
         suma = suma + 1.f / i;
      } else {
         suma = suma - 1.f / i;
      }
      i++;
   } while (i <= 1000);
   printf("Suma = %f", suma);
   return 0;
}