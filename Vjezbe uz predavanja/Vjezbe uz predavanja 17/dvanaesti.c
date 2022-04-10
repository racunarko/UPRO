#include <stdio.h>

int negativci(int *p, int n, int *nadeniNeg) {
   int nNegativaca = 0;
   for (int i = 0; i < n; i++) {
      if (*(p + i) < 0) {
         *(nadeniNeg + nNegativaca) = *(p + i);
         nNegativaca++;
      }
   }
   return nNegativaca;
}

int main() {

   int n;
   printf("Upisite broj clanova > ");
   scanf("%d", &n);

   int polje[n];
   printf("Upisite clanove >\n");
   for (int i = 0; i < n; i++) {
      scanf("%d", polje + i);
   }

   int pNegativaca[n];
   int nNegativaca = negativci(polje, n, pNegativaca);

   for (int i = 0; i < nNegativaca; i++) {
      printf("%d ", *(pNegativaca + i));
   }

   return 0;
}