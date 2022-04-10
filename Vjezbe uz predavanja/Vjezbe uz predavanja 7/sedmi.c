#include <stdio.h>
#define GRANICA_1 10
#define GRANICA_2 30
int main(void) {
   int m, n;
   printf("Upisite m, n > ");
   scanf("%d %d", &m, &n);

   do {
      m = m - 1;
      n = n + 1;
      printf("\nm=%d, n=%d\n", m, n);
      if (m < n) {
         printf("prekidam\n");
      } else {
         printf("%d + %d = %d\n", m, n, m + n);
         if (m % 2 == 0 || n % 5 == 0) {
            printf("nastavljam\n");
         } else {
            printf("%d * %d = %d\n", m, n, m * n);
         }
      }
   } while (m > GRANICA_1 && n < GRANICA_2 && m >= n);
   return 0;
}