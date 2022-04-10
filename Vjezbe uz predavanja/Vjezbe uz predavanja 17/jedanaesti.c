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

void sort2D(char smjer, int m, int n, int *p) {
   int i = 0;
   for (i = 0; i < m; i++) {
      sort1D(smjer, n, p + n * i + 0);
   }
   return;
}

int main() {
   char smjer;
   int m, n;

   printf("Upisite smjer poretka (S - silazno) > ");
   scanf("%c", &smjer);
   printf("Upisite dimenzije > ");
   scanf("%d %d", &m, &n);

   int polje[m][n];

   printf("Upisite clanove >\n");
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &polje[i][j]);
      }
   }

   sort2D(smjer, m, n, &polje[0][0]);

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         printf("%5d", polje[i][j]);
      }
      printf("\n");
   }

   return 0;
}