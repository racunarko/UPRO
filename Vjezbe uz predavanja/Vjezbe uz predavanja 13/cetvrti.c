#include <stdio.h>

int main() {
   unsigned int broj;
   int bit, pozicija;
   int posmakDesno;
   broj = 0;

   do {
      printf("Upisite bit i poziciju > ");
      scanf("%u %u", &bit, &pozicija);
      if (pozicija >= 0 && pozicija <= 31 && (bit == 0 || bit == 1)) {
         if (bit == 1) {
            broj = broj | (0x1 << pozicija);
         } else {
            broj = broj & ~(0x1 << pozicija);
         }

         for (posmakDesno = 31; posmakDesno >= 0; posmakDesno--) {
            printf("%d", broj >> posmakDesno & 0x1);
         }
         printf("(2) = %u(10)\n", broj);
      } else {
         printf("Pogresna vrijednost ili pozicija bita.");
      }
   } while (pozicija >= 0 && pozicija <= 31 && (bit == 0 || bit == 1));

   return 0;
}