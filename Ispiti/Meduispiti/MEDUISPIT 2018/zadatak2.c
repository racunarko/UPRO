#include <stdio.h>

int main() {
   int m, n, i, j, max_suma, suma, max_ind;

   printf("Upisati m i n > ");
   scanf("%d %d", &m, &n);
   int polje[m][n];

   printf("Upisati clanove >\n");
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &polje[i][j]);
      }
   }

   j = 0;
   max_suma = 0;
   max_ind = 0;
   while (j < n) {
      max_suma += polje[0][j];
      j++;
   }

   for (i = 0; i < m; i++) {
      suma = 0;
      for (j = 0; j < n; j++) {
         suma += polje[i][j];
      }
      if (max_suma <= suma) {
         max_suma = suma;
         max_ind = i;
      }
   }
   printf("\"Najveci\" redak:\n");
   for (j = 0; j < n; j++) {
      printf("%5d", polje[max_ind][j]);
   }

   return 0;
}