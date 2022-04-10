#include <stdio.h>
#define BR_ZNAK 10
int main() {
   char polje[BR_ZNAK + 1], pom;
   int i, j;

   printf("Upisite 10 znakova > ");
   for (i = 0; i < BR_ZNAK; i++) {
      scanf("%c", &polje[i]);
   }

   printf("Original :");
   for (i = 0; i < BR_ZNAK; i++) {
      printf("%c", polje[i]);
   }
   printf("\n");

   for (i = 0; i < BR_ZNAK - 1; i++) {
      for (j = i + 1; j < BR_ZNAK; j++) {
         if (polje[i] > polje[j]) {
            pom = polje[i];
            polje[i] = polje[j];
            polje[j] = pom;
         }
      }
   }

   printf("Sortirani:");
   for (i = 0; i < BR_ZNAK; i++) {
      printf("%c", polje[i]);
   }
   printf("\n");
   return 0;
}