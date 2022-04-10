#include <stdio.h>

int main() {
   int n, i, j;
   scanf("%d", &n);

   if (n < 1 || n > 10) {
      printf("Red matrice je neispravan");
   } else {
      for (i = 0; i < n; i++) {
         for (j = 0; j < n; j++) {
            if (i == j) {
               printf("%2d", 1);
            } else {
               printf("%2d", 0);
            }
         }
         printf("\n");
      }
   }
   return 0;
}