#include <stdio.h>
int main(void) {
   int i, n, djeljiv = 0; // hipoteza: nije djeljiv
   printf("Upisite prirodni broj > ");
   scanf("%d", &n);
   for (i = 2; i <= n - 1; i = i + 1) {
      if (n % i == 0) {
         djeljiv = 1; // hipoteza je bila pogresna
         break;       // daljnja ispitivanja nisu potrebna
      }
   }
   if (djeljiv == 1 || n == 1) // jer broj 1 je specijalan slucaj
      printf("%d nije prim broj\n", n);
   else
      printf("%d jest prim broj\n", n);
   return 0;
}