#include <math.h>
#include <stdio.h>

int main() {

   int n, djelitelj, djeljiv = 0;
   printf("Upisati prirodni broj > ");
   scanf("%d", &n);

   if (n % 2 == 0 && n != 2) {
      djeljiv = 1;
   } else {
      for (djelitelj = 3; djelitelj <= sqrt(n); djelitelj = djelitelj + 2) {
         if (n % djelitelj == 0) {
            djeljiv = 1;
            break;
         }
      }
   }

   if (djeljiv == 1 || n == 1) {
      printf("Broj %d nije prim broj.", n);
   } else {
      printf("Broj %d je prim broj.", n);
   }

   return 0;
}