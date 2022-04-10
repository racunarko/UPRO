#include <stdio.h>

int main() {

   unsigned int broj;
   int posmakDesno;

   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &broj);

   printf("%u(10) = ", broj);

   for (posmakDesno = 30; posmakDesno >= 0; posmakDesno = posmakDesno - 3) {
      printf("%d", broj >> posmakDesno & 0x7);
   }

   printf("(8)");

   return 0;
}