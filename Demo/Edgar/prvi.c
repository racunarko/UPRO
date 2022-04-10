#include <stdio.h>

int main() {
   int broj;
   printf("Unesite broj > ");
   scanf("%d", &broj);
   if (broj >= 1 && broj < 100) {
      printf("je");
   } else {
      printf("nije");
   }
   return 0;
}