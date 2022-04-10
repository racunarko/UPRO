#include <stdio.h>

int *prviNegativac(int *polje, int n) {
   for (int i = 0; i < n; i++) {
      if (*(polje + i) < 0) {
         return polje + i;
      }
   }
   return NULL;
}

int main() {
   int n;
   printf("Upisite broj clanova > ");
   scanf("%d", &n);
   int polje[n];
   printf("Upisite clanove > ");
   for (int i = 0; i < n; i++) {
      scanf("%d", polje + i);
   }
   int *pokNaNegativca = prviNegativac(polje, n);
   if (pokNaNegativca == NULL) {
      printf("Nema negativnih brojeva.");
   } else {
      printf("Prvi negativni je %d.", *pokNaNegativca);
   }
   return 0;
}