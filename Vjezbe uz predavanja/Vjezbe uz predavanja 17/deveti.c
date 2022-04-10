#include <stdio.h>

void genPrim(int donjaGr, int n, int *rez) {
   int i, j, brNadenih = 0;
   _Bool prim;
   i = donjaGr;
   while (brNadenih < 4) {
      prim = 1;
      for (j = 2; j <= i / 2; j++) {
         if (i % j == 0) {
            prim = 0;
         }
      }
      if (prim) {
         *(rez + brNadenih) = i;
         brNadenih++;
      }
      i++;
   }
   return;
}

int main() {
   int min, n;
   printf("Upisite donju granicu i broj prim brojeva > ");
   scanf("%d %d", &min, &n);
   int prim[n];
   genPrim(min, n, prim);
   for (int i = 0; i < n; i++) {
      printf("%7d\n", prim[i]);
   }
   return 0;
}