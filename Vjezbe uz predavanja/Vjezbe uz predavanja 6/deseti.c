#include <stdio.h>

int main() {
   int n, maxPoz = 0, minNeg = 0;
   do {
      printf("Upisite broj > ");
      scanf("%d", &n);
      if (n > maxPoz) {
         maxPoz = n;
      }
      if (n < minNeg) {
         minNeg = n;
      }
   } while (n != 0);

   if (minNeg == 0) {
      printf("Nije upisan niti jedan negativni broj\n");
   } else {
      printf("Najmanji negativan = %d\n", minNeg);
   }

   if (maxPoz == 0) {
      printf("Nije upisan niti jedan pozitivni broj");
   } else {
      printf("Najveci pozitivan = %d", maxPoz);
   }
   return 0;
}