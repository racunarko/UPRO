#include <stdio.h>

int main() {
   int granica, n, i;

ponovi_do:
   printf("Upisite granicu > ");
   scanf("%d", &granica);
   n = granica;
   printf("granica = %d\n", granica);

   i = 1;
ponovi_while:
   if (n > 0) {
      i = 1;
   ponovi_for:
      if (i <= n) {
         printf("%4d", i);
         i++;
         goto ponovi_for;
      }

      printf("\n");
      n = n - 1;
      goto ponovi_while;
   }
   if (granica > 0) {
      goto ponovi_do;
   }
   return 0;
}