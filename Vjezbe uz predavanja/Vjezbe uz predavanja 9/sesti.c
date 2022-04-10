#include <stdio.h>
#define MIN_BR_RED 4
#define MAX_BR_RED 8
#define MIN_BR_STUP 5
#define MAX_BR_STUP 10

int main() {
   int m, n, i, j;
   do {
      printf("Upisite m [%d, %d] > ", MIN_BR_RED, MAX_BR_RED);
      scanf("%d", &m);
   } while (m < MIN_BR_RED || m > MAX_BR_RED);
   do {
      printf("Upisite n [%d, %d] > ", MIN_BR_STUP, MAX_BR_STUP);
      scanf("%d", &n);
   } while (n < MIN_BR_STUP || n > MAX_BR_STUP);
   printf("Upisite %d x %d clanova > ", m, n);
   int polje[m][n];
   int sumaPoStupcima[n];
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &polje[i][j]);
         sumaPoStupcima[j] = 0;
      }
   }
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         sumaPoStupcima[j] = sumaPoStupcima[j] + polje[i][j];
      }
   }
   printf("Suma po stupcima:\n");
   for (i = 0; i < n; i++) {
      printf("%5d", sumaPoStupcima[i]);
   }
   return 0;
}