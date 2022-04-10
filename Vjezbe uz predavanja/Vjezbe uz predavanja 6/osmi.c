#include <stdio.h>

int main() {
   int n, i, j, redniBr = 1;
   printf("Upisite broj > ");
   scanf("%d", &n);

   if (n < 1 || n > 10) {
      printf("Broj je neispravan");
   } else {
      for (i = 0; i < n; i++) {
         for (j = 0; j < n; j++) {
            if (i <= j) {
               printf("%4d", redniBr);
               redniBr++;
            } else {
               printf("    ");
            }
         }
         printf("\n");
      }
   }
   return 0;
}