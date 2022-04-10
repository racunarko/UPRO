#include <stdio.h>

void transpKvad(int *p, int n) {
   int i, j, pom;
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         if (i < j) {
            pom = *(p + n * i + j);
            *(p + n * i + j) = *(p + n * j + i);
            *(p + n * j + i) = pom;
         }
      }
   }
   return;
}

int main() {
   int n;
   printf("Upisite red matrice > ");
   scanf("%d", &n);
   int mat[n][n];
   printf("Upisite clanove >\n");
   for (int i = 0; i < n * n; i++) {
      scanf("%d", mat[0] + i);
   }
   transpKvad(&mat[0][0], n);
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         printf("%5d", mat[i][j]);
      }
      printf("\n");
   }
   return 0;
}