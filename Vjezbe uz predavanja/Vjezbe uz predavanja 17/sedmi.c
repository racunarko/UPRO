#include <stdio.h>

double zbroj2D(double *p, int m, int n) {
   double rez = 0;
   int i, j;
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         rez = rez + *(p + n * i + j);
      }
   }
   return rez;
}

int main() {
   int m, n, i, j;
   printf("Upisite dimenzije > ");
   scanf("%d %d", &m, &n);
   double polje[m][n], suma;
   double *p = &polje[0][0];
   printf("Upisite clanove >\n");
   for (i = 0; i < m * n; i++) {
      scanf("%lf", p + i);
   }
   suma = zbroj2D(&polje[0][0], m, n);
   printf("Suma je: %lf", suma);
   return 0;
}