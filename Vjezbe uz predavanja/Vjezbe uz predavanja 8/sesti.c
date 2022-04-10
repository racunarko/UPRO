#include <stdio.h>
#define DONJA_GR 3
#define GORNJA_GR 20

int main() {
   int n, i, brParnih = 0, brNeparnih = 0;

   do {
      printf("Upisite broj iz intervala [3, 20] > ");
      scanf("%d", &n);
   } while (n < DONJA_GR || n > GORNJA_GR);

   int cijeli[n];

   printf("Upisite cijele brojeve (%d) > ", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &cijeli[i]);
      if (cijeli[i] % 2 == 0) {
         brParnih++;
      } else {
         brNeparnih++;
      }
   }

   int parni[brParnih], neparni[brNeparnih];
   int j = 0, k = 0;

   for (i = 0; i < n; i++) {
      if (cijeli[i] % 2 == 0) {
         parni[j] = cijeli[i];
         j++;
      } else {
         neparni[k] = cijeli[i];
         k++;
      }
   }

   printf("Ulaz: ");
   for (i = 0; i < n; i++) {
      printf("%d ", cijeli[i]);
   }

   printf("\nParni: ");
   for (i = 0; i < brParnih; i++) {
      printf("%d ", parni[i]);
   }

   printf("\nNeparni: ");
   for (i = 0; i < brNeparnih; i++) {
      printf("%d ", neparni[i]);
   }

   return 0;
}