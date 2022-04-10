#include <stdio.h>
#define POCETAK_INT 1000
#define KRAJ_INT 10000

int main() {
   int broj, djelitelj, prim;
   broj = POCETAK_INT;

   while (broj >= POCETAK_INT && broj <= KRAJ_INT) {
      prim = 1;

      for (djelitelj = 2; djelitelj <= broj / 2; djelitelj++) {
         if (broj % djelitelj == 0) {
            prim = 0;
            break;
         }
      }
      if (prim) {
         printf("%d\n", broj);
      }
      broj++;
   }

   return 0;
}