#include <stdio.h>

int main() {
   int a, b;

   printf("Upisite dva broja > ");
   scanf("%d %d", &a, &b);

   if ((a > 100 && b < 100) || (a < 100 && b > 100)) {
      printf("Jedan je veci, a drugi manji od 100");
   }

   return 0;
}