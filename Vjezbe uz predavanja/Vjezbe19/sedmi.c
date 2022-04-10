#include <stdio.h>
#define MAXZN 20

void brojiVelikaMala(char *niz, int *brVelikih, int *brMalih) {
   int i = 0;
   while (*(niz + i) != '\0') {
      if (*(niz + i) >= 'A' && *(niz + i) <= 'Z') {
         ++*brVelikih;
      }
      if (*(niz + i) >= 'a' && *(niz + i) <= 'z') {
         ++*brMalih;
      }
      i++;
   }
   return;
}

int main() {
   char niz[MAXZN + 1];
   int brVelikih = 0, brMalih = 0;
   printf("Upisite niz > ");
   fgets(niz, MAXZN + 1, stdin);
   brojiVelikaMala(niz, &brVelikih, &brMalih);
   printf("Velikih: %d\n", brVelikih);
   printf("Malih: %d", brMalih);
   return 0;
}