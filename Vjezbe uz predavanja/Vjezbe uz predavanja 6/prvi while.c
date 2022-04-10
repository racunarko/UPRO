#include <stdio.h>

int main() {
   int i;
   float suma = 0;
   i = 1;
   while (i <= 1000) {
      if (i % 2 != 0) {
         suma = suma + 1.f / i;
      } else {
         suma = suma - 1.f / i;
      }
      i++;
   }
   printf("Suma = %f", suma);
   return 0;
}