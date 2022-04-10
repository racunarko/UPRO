#include <stdio.h>

int main() {

   int m, n, i, j;
   printf("Upisite m, n > ");
   scanf("%d %d", &m, &n);
   for (i = 0; i < m; i++) {
      for (j = n; j > 0; j--) {
         printf("%4d", i + j);
      }
      printf("\n");
   }
   return 0;
}