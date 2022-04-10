#include <stdio.h>

int main() {
   int N = 10;
   int p[] = {0, 1, 2, 1, 4, 5, 1, 7, 8, 9};
   int i, j;
   // za zadani element izbaciti taj element iz polja
   int zv = 1;

   // (i + 1)-ti element polja premjesti na i-tu poziciju u polju
   for (i = 0; i < N; i++) {
      if (p[i] == zv) {
         for (j = i; j < N - 1; j++) {
            p[j] = p[j + 1];
         }
         N = N - 1;
      }
   }

   for (i = 0; i < N; i++) {
      printf(" %d", p[i]);
   }
   return 0;
}