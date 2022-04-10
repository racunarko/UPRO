#include <stdio.h>

int main() {

   unsigned int broj, uzorak;
   int i, brPonavljanja = 0;

   printf("Unesite 32-bitni broj > ");
   scanf("%u", &broj);

   printf("Unesite 8-bitni uzorak > ");
   scanf("%u", &uzorak);

   for (i = 0; i < 32 - 8; i++) {
      if (((broj >> i) & 0xFF) == uzorak) {
         brPonavljanja++;
      }
   }

   printf("Rezultat: %d", brPonavljanja);

   return 0;
}