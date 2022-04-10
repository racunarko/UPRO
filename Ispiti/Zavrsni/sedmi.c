#include <stdio.h>
#include <string.h>

#define MAX_NIZ 8

int main(void) {
   int velika, mala;
   char *p = NULL;
   char niz[MAX_NIZ + 1];
   fgets(niz, MAX_NIZ + 1, stdin);

   if (p == NULL) {
      printf("U nizu nema samoglasnika.");
   } else {
      printf("%c\n", *p);
   }
   printf("Velikih: %d\n", velika);
   printf("Malih: %d\n", mala);
   return 0;
}