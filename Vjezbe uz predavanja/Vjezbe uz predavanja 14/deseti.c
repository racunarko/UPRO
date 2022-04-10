#include <stdio.h>

int getBit(unsigned int x, int n) { return x >> n & 0x1; }

void printBinary(unsigned int broj) {
   int i;
   for (i = 31; i >= 0; i--) {
      printf("%d", getBit(broj, i));
   }
   return;
}

int main() {
   unsigned int broj;
   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &broj);
   printBinary(broj);
   return 0;
}