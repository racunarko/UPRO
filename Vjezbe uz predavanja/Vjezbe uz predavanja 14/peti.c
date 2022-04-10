#include <stdio.h>
void tablica(int m, int n) {
   int i, j;
   printf("%5c", ' ');
   for (j = 1; j <= n; j++) {
      printf("%5d", j);
   }
   printf("\n");
   for (i = 1; i <= m; i++) {
      printf("%5d", i);
      for (j = 1; j <= n; j++) {
         printf("%5d", i * j);
      }
      printf("\n");
   }
   return;
}
int main() {
   int m, n;
   printf("Upisite broj redaka i stupaca > ");
   scanf("%d %d", &m, &n);
   tablica(m, n);
   return 0;
}