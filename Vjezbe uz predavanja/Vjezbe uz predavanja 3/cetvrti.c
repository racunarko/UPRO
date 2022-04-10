#include <stdio.h>

int main() {
   float tempC, tempF;
   int broj;

   printf("Program za konverziju Fahrenheit - Celsius ili obrnuto.\n");
   printf("Za F u C upisite 1, a za C u F bilo koji drugi cijeli broj > ");
   scanf("%d", &broj);

   if (broj == 1) {
      printf("Upisite temperaturu izrazenu u stupnjevima Fahrenheit > ");
      scanf("%f", &tempF);
      tempC = (tempF - 32.f) * 5.f / 9.f;
      printf("%8.3f st. F = %8.3f st. C\n", tempF, tempC);
   } else {
      printf("Upisite temperaturu izrazenu u stupnjevima Celsius > ");
      scanf("%f", &tempC);
      tempF = (tempC * 9.f / 5.f) + 32.f;
      printf("%8.3f st. C = %8.3f st. F\n", tempC, tempF);
   }

   return 0;
}