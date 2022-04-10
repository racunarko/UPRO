#include <stdio.h>

int main() {
   int n = 0, suma = 0;

   do {
      suma = suma + n;
      scanf("%d", &n);
   } while (n % 7 == 0 || n % 3 == 0);
   printf("suma = %d", suma);
   return 0;
}