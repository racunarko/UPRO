#include <stdio.h>

int main() {
   float napierConst = 2.71828f;
   float saturnSunDist = 1.43344e12f;
   float planckConst = 6.62607e-34f;

   printf("Napierova konstanta:\n");
   printf("%f\n", napierConst);
   printf("%6.2f\n", napierConst);
   printf("%6.3f\n", napierConst);
   printf("%14.10f\n\n", napierConst);

   printf("Srednja udaljenost Saturna i Sunca:\n");
   printf("%f\n", saturnSunDist);
   printf("%.2f\n", saturnSunDist);
   printf("%12.4e\n\n", saturnSunDist);

   printf("Planckova konstanta:\n");
   printf("%f\n", planckConst);
   printf("%40.36f\n", planckConst);
   printf("%.5e\n", planckConst);
   printf("%19.10e\n", planckConst);

   return 0;
}