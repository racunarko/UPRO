#include <math.h>
#include <stdio.h>

int main() {
   int n, ekv = 0, zn, i;
   scanf("%d", &n);
   if (n >= 1 && n <= 31) {
      for (i = 0; i < n; i++) {
         scanf("%d", &zn);
         ekv = ekv * 2 + zn;
      }
      printf("= %d", ekv);
   } else {
      printf("Broj znamenki je neispravan");
   }
   return 0;
}