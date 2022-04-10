#include <stdio.h>

int getBit(unsigned int x, int n) { return x >> n & 0x1; }

int main() {
   unsigned int broj;
   int n, bit;
   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &broj);
   printf("Upisite redni broj bita > ");
   scanf("%d", &n);
   printf("Vrijednost bita je %d", getBit(broj, n));
   return 0;
}