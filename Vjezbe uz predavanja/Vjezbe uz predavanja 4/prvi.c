#include <stdio.h>

int main() {
   float a, b;
   int operacija;
   printf("Upisite dva realna broja: > ");
   scanf("%f %f", &a, &b);
   printf("Upisite vrstu operacije (1-zbrajanje, 2-mnozenje) > ");
   scanf("%d", &operacija);
   switch (operacija) {
   case 1:
      printf("Zbroj je %f", a + b);
      break;
   case 2:
      printf("Umnozak je %f", a * b);
      break;
   default:
      printf("Neispravan odabir operacije");
      break;
   }
   return 0;
}