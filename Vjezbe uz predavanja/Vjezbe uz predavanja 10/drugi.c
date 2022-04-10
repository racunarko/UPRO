#include <stdio.h>

int main() {
   unsigned int hex;
   printf("Upisite heksadekadski nenegativni cijeli broj > ");
   scanf("%x", &hex);
   while (hex != 0) {
      printf("%11u\n", hex);
      printf("Upisite heksadekadski nenegativni cijeli broj > ");
      scanf("%x", &hex);
   }
   return 0;
}