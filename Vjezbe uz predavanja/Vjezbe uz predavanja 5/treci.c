#include <stdio.h>

int main() {
   float visina;
   printf(
       "Ucitati realni broj koji predstavlja visinu izrazenu u kilometrima > ");
   scanf("%f", &visina);
   if (visina < 12) {
      printf("troposfera");
   } else if (visina < 50) {
      printf("stratosfera");
   } else if (visina < 80) {
      printf("mezosfera");
   } else if (visina < 700) {
      printf("termosfera");
   }
   return 0;
}