#include <stdio.h>

int main() {

   int n = 0, suma = 0, nPrethodni;

   do {
      if (suma != 0) {
         nPrethodni = n;
      }
      scanf("%d", &n);
      if (suma == 0 && n > 0) {
         nPrethodni = -1;
      } else if (suma == 0 && n < 0) {
         nPrethodni = 1;
      }
      suma = suma + n;
   } while ((nPrethodni > 0 && n < 0) || (nPrethodni < 0 && n > 0));

   suma = suma - n;
   printf("suma = %d", suma);

   return 0;
}