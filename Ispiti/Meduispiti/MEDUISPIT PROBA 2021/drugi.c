#include <stdio.h>

int main() {
   int m, n, i, j, max, maxInd;
   printf("Upisite dimenzije dvodimenzijskog polja > ");
   scanf("%d %d", &m, &n);
   int polje[m][n];
   for (i = 0; i < m; i++) {
      printf("Upisite ocjene %d. gledatelja > ", i);
      for (j = 0; j < n; j++) {
         scanf("%d", &polje[i][j]);
      }
   }
   float prosjecna, suma;
   for (i = 0; i < m; i++) {
      suma = polje[i][0];
      max = polje[i][0];
      maxInd = 0;
      for (j = 1; j < n; j++) {
         suma = suma + polje[i][j];
         if (max < polje[i][j]) {
            max = polje[i][j];
            maxInd = j;
         }
      }
      prosjecna = suma / n;
      printf("%d. gledatelj je dao najvecu ocjenu %d. filmu, a prosjecna "
             "ocjena kojom je ocijenio filmove iznosi %.1f\n",
             i, maxInd, prosjecna);
   }
   return 0;
}