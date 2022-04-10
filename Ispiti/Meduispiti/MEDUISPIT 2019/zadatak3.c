#include <stdio.h>
#define DONJA_GR 2
#define GORNJA_GR 20

int main() {
   int djeljitelji[GORNJA_GR - DONJA_GR + 1] = {0};
   int i, broj, counter = 0;
   do {
      printf("Upisati broj > ");
      scanf("%d", &broj);
      if (broj > 0) {
         counter++;
         for (i = DONJA_GR; i <= GORNJA_GR; i++) {
            if (broj % i == 0) {
               ++djeljitelji[i - DONJA_GR];
            }
         }
      }
   } while (broj > 0);
   printf("Djelitelji brojac");
   for (i = DONJA_GR; i <= GORNJA_GR; i++) {
      printf(" %d", djeljitelji[i - DONJA_GR]);
   }
   printf("\nRezulat:");
   for (i = DONJA_GR; i <= GORNJA_GR; i++) {
      if ((float)djeljitelji[i - DONJA_GR] / counter >= 0.5) {
         printf(" %d", i);
      }
   }
   return 0;
}