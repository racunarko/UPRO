#include <stdio.h>

int main() {
   int N = 10;
   int p[] = {0, 1, 2, 1, 2, 3, 1, 2, 3, 4};
   int i, j;

   for (i = 0; i < N; i++) {
      int vecViden = 0;
      for (j = 0; j < i; j++) {
         if (p[j] == p[i]) {
            vecViden = 1;
            break;
         }
      }
      printf("p [%d] = %d i taj broj je vv = %d\n", i, p[i], vecViden);
      if (vecViden) {
         for (j = i; j < N - 1; j++) {
            p[j] = p[j + 1];
         }
         N = N - 1;
         i--;
      }
   }
   printf("N = %d\n", N);
   for (i = 0; i < N; i++) {
      printf(" %d", p[i]);
   }
   return 0;
}
