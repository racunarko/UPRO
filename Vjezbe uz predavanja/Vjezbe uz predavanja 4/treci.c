#include <stdio.h>

int main() {
   float a1, a2, b1, b2;
   float r1, r2;
   printf("Upisite granice 1. intervala > ");
   scanf("%f %f", &a1, &a2);
   printf("Upisite granice 2. intervala > ");
   scanf("%f %f", &b1, &b2);

   if (a1 > a2 || b1 > b2 || a1 > b1) {
      printf("Granice intervala su neispravne");
   } else {
      if (a2 < b1) {
         printf("Presjek intervala je prazan skup");
      } else {
         r1 = b1;
         if (a2 > b2) {
            r2 = b2;
         } else {
            r2 = a2;
         }
         printf("Presjek intervala je [%.3f, %.3f]", r1, r2);
      }
   }
   return 0;
}