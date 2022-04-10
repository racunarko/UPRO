#include <stdio.h>

int main() {
   int m, i, n, rezultat, brojnik = 1, naz1 = 1, naz2 = 1;
   printf("Upisite m i n > ");
   scanf("%d %d", &m, &n);
   if (n >= 0 && m >= n) {
      for (i = 1; i <= m; i++) {
         brojnik = brojnik * i;
      }
      for (i = 1; i <= n; i++) {
         naz1 = naz1 * i;
      }
      for (i = 1; i <= (m - n); i++) {
         naz2 = naz2 * i;
      }
      rezultat = brojnik / (naz1 * naz2);
      printf("%d povrh %d = %d", m, n, rezultat);
   } else {
      printf("m ili n su neispravni");
   }
   return 0;
}