#include <stdio.h>

int main() {
   int n, suma = 0;
   scanf("%d", &n);
   suma += n;
   while (n % 3 == 0 || n % 7 == 0) {
      scanf("%d", &n);
      suma += n;
   }
   printf("Suma = %d", suma);
   return 0;
}