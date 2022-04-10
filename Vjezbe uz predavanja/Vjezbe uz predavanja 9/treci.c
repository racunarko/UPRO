#include <stdio.h>

int main() {

   int m, n, i, j, minI, minJ, prviProlaz = 0;
   printf("Upisite m, n > ");
   scanf("%d %d", &m, &n);
   int polje[m][n];
   printf("Upisite %d x %d clanova > ", m, n);
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &polje[i][j]);
      }
   }
   for (j = 0; j < n; j++) {
      minI = 0;
      minJ = j;
      for (i = 1; i < m; i++) {
         if (polje[minI][minJ] > polje[i][j]) {
            minI = i;
            minJ = j;
         }
      }
      printf("%d. stupac: ", j + 1);
      prviProlaz = 0;
      for (i = 0; i < m; i++) {
         if (polje[minI][minJ] == polje[i][j] && prviProlaz == 0) {
            printf("(%d, %d)", i, j);
            prviProlaz = 1;
         } else if (polje[minI][minJ] == polje[i][j]) {
            printf(", (%d, %d)", i, j);
         }
      }
      printf("\n");
   }
   return 0;
}