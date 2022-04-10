#include <stdio.h>

int main() {
   float a, b, c, d, e;
   int brojac = 0;
   printf("Upisite pet realnih brojeva > ");
   scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

   if (a > 0.f)
      brojac++;
   if (b > 0.f)
      brojac++;
   if (c > 0.f)
      brojac++;
   if (d > 0.f)
      brojac++;
   if (e > 0.f)
      brojac++;

   if (brojac >= 3) {
      printf("Barem tri su veca od nule");
   } else {
      printf("Niti tri nisu veca od nule");
   }

   return 0;
}