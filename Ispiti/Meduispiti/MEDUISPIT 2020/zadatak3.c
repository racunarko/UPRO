#include <stdio.h>
#define MAX_INT 101000
#define MIN_INT 100000
#define MAX_UPLATA_PO_RACUNU 3

int main() {
   int sumaUplata[MAX_INT - MIN_INT + 1] = {0};
   int brojUplata[MAX_INT - MIN_INT + 1] = {0};
   int i = 0, brRacuna, iznos, najvecaSuma;

   printf("Upisujte uplate >\n");
   do {
      scanf("%d %d", &brRacuna, &iznos);
      sumaUplata[brRacuna - MIN_INT] += iznos;
      ++brojUplata[brRacuna - MIN_INT];
   } while (brojUplata[brRacuna - MIN_INT] < MAX_UPLATA_PO_RACUNU);

   najvecaSuma = sumaUplata[0];
   for (i = 1; i < MAX_INT - MIN_INT + 1; i++) {
      if (sumaUplata[i] > najvecaSuma) {
         najvecaSuma = sumaUplata[i];
      }
   }
   printf("Najveca suma: %7d kn\n", najvecaSuma);
   return 0;
}