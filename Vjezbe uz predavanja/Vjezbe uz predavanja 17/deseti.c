#include <stdio.h>

void zamijeni(int *x, int *y) {
   int pom;
   pom = *x;
   *x = *y;
   *y = pom;
   return;
}

void sort1D(char smjer, int n, int *p) {
   int i, j, pom;
   if (smjer == 'S') {
      for (i = 0; i < n - 1; i++) {
         for (j = i + 1; j < n; j++) {
            if (*(p + i) < *(p + j)) {
               zamijeni(p + i, p + j);
            }
         }
      }
   } else {
      for (i = 0; i < n - 1; i++) {
         for (j = i + 1; j < n; j++) {
            if (*(p + i) > *(p + j)) {
               zamijeni(p + i, p + j);
            }
         }
      }
   }
   return;
}

int main() {
   char smjer;
   int n;
   printf("Upisite smjer poretka (S - silazno) > ");
   scanf("%c", &smjer);
   printf("Upisite dimenziju > ");
   scanf("%d", &n);
   int polje[n];
   printf("Upisite clanove > ");
   for (int i = 0; i < n; i++) {
      scanf("%d", polje + i);
   }
   sort1D(smjer, n, polje);
   for (int i = 0; i < n; i++) {
      printf("%d ", polje[i]);
   }
   return 0;
}