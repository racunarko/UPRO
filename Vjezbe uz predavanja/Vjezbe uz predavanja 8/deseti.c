#include <stdio.h>
#define DONJA_GR 5
#define GORNJA_GR 20

int main() {
   int n, i, j, nNovo;
   printf("Upisite cijeli broj [%d, %d] > ", DONJA_GR, GORNJA_GR);
   scanf("%d", &n);
   int polje[n];
   printf("Upisite cijele brojeve (%d): ", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &polje[i]);
   }
   nNovo = n / 2;
   for (i = 0; i < nNovo; i++) {
      polje[i] = polje[2 * i + 1];
   }
   for (i = 0; i < nNovo; i++) {
      printf("%d ", polje[i]);
   }
   return 0;
}