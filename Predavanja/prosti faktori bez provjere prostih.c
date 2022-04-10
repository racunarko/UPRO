#include <stdio.h>

int main() {
   int broj, spremnikBr, faktor = 2, flag = 0;

   printf("Ucitajte cijeli broj > ");
   scanf("%d", &broj);
   printf("\n%d = ", broj);
   spremnikBr = broj;

   while (faktor < spremnikBr) {
      while (broj % faktor == 0) {
         broj = broj / faktor;
         if (flag == 0) {
            printf("%d ", faktor);
         } else {
            printf("* %d ", faktor);
         }
         flag = 1;
      }
      faktor++;
   }

   if (spremnikBr == broj) {
      printf("%d", spremnikBr);
   }

   printf("\n");
   return 0;
}