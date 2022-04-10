#include <stdio.h>

int main() {
   unsigned int broj;
   int posmakDesno;

   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &broj);

   printf("%u(10) = ", broj);
   for (posmakDesno = 28; posmakDesno >= 0; posmakDesno -= 4) {
      // printf("%X", broj >> posmakDesno & 0xF);

      int znamenka = broj >> posmakDesno & 0xF;
      if (znamenka >= 0 && znamenka < 10) {
         printf("%d", znamenka);
      } else {
         printf("%c", znamenka - 10 + 'A');
      }
   }
   printf("(16)");

   return 0;
}
