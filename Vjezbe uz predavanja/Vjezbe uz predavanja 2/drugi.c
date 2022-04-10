#include <stdio.h>

int main() {
   int bankStanje, kune, lipe;

   printf("Upisite stanje racuna u lipama > ");
   scanf("%d", &bankStanje);

   lipe = bankStanje % 100;
   kune = bankStanje / 100;

   printf("Kuna: %d Lipa: %d", kune, lipe);

   return 0;
}