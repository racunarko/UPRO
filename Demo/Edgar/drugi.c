#include <stdio.h>

int main() {
   int broj;
   printf("Unesite broj > ");
   scanf("%d", &broj);
   if (broj >= -100 && broj < 1) {
      printf("je");
   } else {
      printf("nije");
   }
   return 0;
}