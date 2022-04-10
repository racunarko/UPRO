#include <stdio.h>

int main() {
   int m, n, i, j, pomocna, k;
   printf("Upisite m, n >");
   scanf("%d %d", &m, &n);
   int polje[m][n];
   printf("Upisite %d x %d clanova > ", m, n);
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &polje[i][j]);
      }
   }
   for (j = 0; j < n; j++) {
      for (i = 0; i < m - 1; i++) {
         for (k = i + 1; k < m; k++) {
            if (polje[i][j] > polje[k][j]) {
               pomocna = polje[i][j];
               polje[i][j] = polje[k][j];
               polje[k][j] = pomocna;
            }
         }
      }
   }
   printf("Nakon sortiranja stupaca:\n");
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         printf("%4d", polje[i][j]);
      }
      printf("\n");
   }
   return 0;
}