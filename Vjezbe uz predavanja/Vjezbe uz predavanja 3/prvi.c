#include <stdio.h>
#define MASA_ZEMLJE 5.9722e24f   // kg
#define POLUMJER_ZEMLJE 6.371e6f // m
#define GRAV_KONST 6.67408e-11f  // m(3) kg(-1) s(-2)

int main() {
   int h; // visina iznad povrsine zemlje
   float g;
   float udalj_sr; // ukupna udaljenost do sredista Zemlje

   printf("Upisite visinu (m) iznad povrsine Zemlje > ");
   scanf("%d", &h);

   udalj_sr = POLUMJER_ZEMLJE + h;
   g = MASA_ZEMLJE * GRAV_KONST / (udalj_sr * udalj_sr);

   printf("Gravitacija na visini %d metara je priblizno %e m s(-2)", h, g);

   return 0;
}