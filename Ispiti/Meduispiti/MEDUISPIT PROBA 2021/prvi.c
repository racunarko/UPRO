#include <stdio.h>
#define GORNJA_GR 101000
#define DONJA_GR 100000

int main() {
   int brUplata, unesen, i, brRacuna, iznos, max;
   printf("Upisite broj uplata > ");
   scanf("%d", &brUplata);
   int racuni[GORNJA_GR - DONJA_GR + 1] = {0};
   printf("Upisujte uplate >\n");
   for (i = 0; i < brUplata; i++) {
      scanf("%d %d", &brRacuna, &iznos);
      racuni[brRacuna - DONJA_GR] = racuni[brRacuna - DONJA_GR] + iznos;
   }
   max = racuni[0];
   for (i = 0; i < GORNJA_GR - DONJA_GR + 1; i++) {
      if (racuni[i] > max) {
         max = racuni[i];
      }
   }
   printf("Najveca suma:%8d kn\n", max);
   return 0;
}