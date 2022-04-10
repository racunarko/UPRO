#include <stdio.h>
#define DONJA_GR 1
#define GORNJA_GR 20000

int main() {
   int broj, brIntervala[GORNJA_GR / 100] = {0}, i, max;
   printf("Upisite brojeve [%d, %d] > ", DONJA_GR, GORNJA_GR);
   scanf("%d", &broj);

   while (broj >= DONJA_GR && broj <= GORNJA_GR) {
      for (i = 0; i < GORNJA_GR / 100 - 1; i++) {
         if (broj >= (i * 100 + 1) && broj <= (i * 100 + 100)) {
            brIntervala[i]++;
         }
      }
      scanf("%d", &broj);
   }

   int maxPonavljanja = brIntervala[0];
   for (i = 0; i < GORNJA_GR / 100 - 1; i++) {
      if (brIntervala[i] > 0) {
         printf("[%d, %d]: %d\n", i * 100 + 1, i * 100 + 100, brIntervala[i]);
      }
      if (maxPonavljanja < brIntervala[i]) {
         maxPonavljanja = brIntervala[i];
      }
   }
   printf("Najvise ponvaljanja: \n");
   for (i = 1; i < GORNJA_GR / 100 - 1; i++) {
      if (brIntervala[i] == maxPonavljanja) {
         printf("[%d, %d]: %d\n", i * 100 + 1, i * 100 + 100, brIntervala[i]);
      }
   }

   return 0;
}