#include <math.h>
#include <stdio.h>
#define PI 3.14159f

int main() {
   float radijus, volumen;

   printf("Upisite radijus kugle > ");
   scanf("%f", &radijus);

   if (radijus > 0.f) {
      volumen = 4.f / 3 * pow(radijus, 3) * PI;
      printf("Volumen kugle radijusa %.3f je %.3f", radijus, volumen);
   } else {
      printf("Neispravan radijus kugle");
   }

   return 0;
}