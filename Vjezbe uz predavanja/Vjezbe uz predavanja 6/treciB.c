#include <stdio.h>

int main() {
   int n, suma = 0;

   do {
      scanf("%d", &n);
      suma += n;
   } while (n % 3 == 0 || n % 7 == 0);
   printf("Suma = %d", suma);
   return 0;
}