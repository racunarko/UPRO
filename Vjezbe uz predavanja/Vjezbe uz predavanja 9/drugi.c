#include <stdio.h>
#define BR_SLOJEVA 4
#define BR_REDAKA 3
#define BR_STUPACA 6

int main() {
   int polje[BR_SLOJEVA][BR_REDAKA][BR_STUPACA], i, j, k;
   for (i = 0; i < BR_SLOJEVA; i++) {
      for (j = 0; j < BR_REDAKA; j++) {
         for (k = 0; k < BR_STUPACA; k++) {
            polje[i][j][k] = 100 * (i + 1) + 10 * (j + 1) + k + 1;
         }
      }
   }
   for (i = 0; i < BR_SLOJEVA; i++) {
      printf("%d. sloj\n", i + 1);
      for (j = 0; j < BR_REDAKA; j++) {
         for (k = 0; k < BR_STUPACA; k++) {
            printf("%5d", polje[i][j][k]);
         }
         printf("\n");
      }
      printf("\n");
   }
   return 0;
}