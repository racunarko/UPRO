#include <stdio.h>

int main() {
   int n, suma = 0;
   printf("Upisite broj djeljiv s 3 ili 7 > ");
   scanf("%d", &n);
   while (n % 3 == 0 || n % 7 == 0) {
      suma = suma + n;

      printf("Upisite broj djeljiv s 3 ili 7 > ");
      scanf("%d", &n);
   }
   printf("Suma ucitanih brojeva je %d", suma);
   return 0;
}