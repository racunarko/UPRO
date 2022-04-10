#include <stdio.h>
#define DONJA_GR 5
#define GORNJA_GR 20

int main() {
   int n, nProsirenog, i, j = 0;
   printf("Upisite cijeli broj [%d, %d] > ", DONJA_GR, GORNJA_GR);
   scanf("%d", &n);
   nProsirenog = n + n - 1;
   int polje[nProsirenog];

   printf("Upisite cijele brojeve (%d): ", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &polje[i]);
   }

   for (i = n - 1; i > 0; i--) {
      polje[i * 2] = polje[i];
      polje[i * 2 - 1] = polje[i] + polje[i - 1];
   }

   for (i = 0; i < nProsirenog; i++) {
      printf("%d ", polje[i]);
   }

   return 0;
}