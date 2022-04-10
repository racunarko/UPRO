#include <math.h>
#include <stdio.h>
#define MAXPRIM 500

int main() {
   int prim[MAXPRIM], n = 3, i = 1, j, prost, iteracije = 0;
   prim[0] = 2;
   while (i < MAXPRIM) {
      prost = 0;
      for (j = 1; j < i && prim[j] <= sqrt(n); j++) {
         iteracije++;
         if (n % prim[j] == 0) {
            prost = 1;
            break;
         }
      }
      if (prost == 0) {
         prim[i] = n;
         i++;
      }
      n = n + 2;
   }
   for (i = 0; i < MAXPRIM; i++) {
      printf("%d. %5d\n", i + 1, prim[i]);
   }
   printf("\n%d iteracija", iteracije);
   return 0;
}