#include <stdio.h>
#define MIN_INT 100000
#define MAX_INT 101000

int main() {
   int racuni[MAX_INT - MIN_INT + 1] = {0};
   int brUplata, i, brRacuna, uplata, max;

   printf("Upisite broj uplata > ");
   scanf("%d", &brUplata);

   printf("Upisujte uplate >\n");
   for (i = 0; i < brUplata; i++) {
      scanf("%d %d", &brRacuna, &uplata);
      racuni[brRacuna - MIN_INT] += uplata;
   }

   max = racuni[0];
   for (i = 1; i < MAX_INT - MIN_INT + 1; i++) {
      if (racuni[i] > max) {
         max = racuni[i];
      }
   }

   printf("Najveca suma:%8d kn\n", max);

   return 0;
}