#include <stdio.h>

int main() {
   int m, n, i, j, pomocna;
   printf("Upisite m, n > ");
   scanf("%d %d", &m, &n);
   int polje[m][n];
   printf("Upisite %d x %d clanova > ", m, n);
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &polje[i][j]);
      }
   }
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         if (i == m - 1) {
            pomocna = polje[i][j];
            polje[i][j] = polje[0][j];
            polje[0][j] = pomocna;
         }
      }
   }
   for (i = 0; i < m - 2; i++) {
      for (j = 0; j < n; j++) {
         pomocna = polje[i][j];
         polje[i][j] = polje[i + 1][j];
         polje[i + 1][j] = pomocna;
      }
   }
   printf("Nakon posmaka:\n");
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         printf("%4d", polje[i][j]);
      }
      printf("\n");
   }
   return 0;
}