#include <stdio.h>

int main() {

   unsigned int cijeli;
   int posmakPremaDesno;

   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &cijeli);

   printf("%u(10) = ", cijeli);

   for (posmakPremaDesno = 31; posmakPremaDesno >= 0; posmakPremaDesno--) {
      printf("%u", cijeli >> posmakPremaDesno & 0x1);
   }

   printf("(2)");

   return 0;
}