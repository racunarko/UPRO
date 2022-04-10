#include <stdio.h>

int main() {
   int brojZnamenaka[10] = {0};
   int brojNegativnih = 0;
   int broj, pomocni, znamenka;
   do {
      printf("Upisati broj > ");
      scanf("%d", &broj);
      if (broj != 0) {
         if (broj < 0) {
            brojNegativnih++;
            pomocni = -1 * broj;
         } else {
            pomocni = broj;
         }
         while (pomocni != 0) {
            znamenka = pomocni % 10;
            ++brojZnamenaka[znamenka];
            pomocni = pomocni / 10;
         }
      }
   } while (broj != 0);

   int i;
   for (i = 0; i < 10; i++) {
      printf("Znamenka %d: %3d puta\n", i, brojZnamenaka[i]);
   }
   printf("Negativni : %3d puta\n", brojNegativnih);
   return 0;
}