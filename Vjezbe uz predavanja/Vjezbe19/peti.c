#include <stdio.h>
#define MAXZN 20

char *traziPrviSamoglas(char *niz) {
   int i = 0;
   while (*(niz + i) != '\0') {
      if (*(niz + i) == 'A' || *(niz + i) == 'E' || *(niz + i) == 'I' ||
          *(niz + i) == 'O' || *(niz + i) == 'U' || *(niz + i) == 'a' ||
          *(niz + i) == 'e' || *(niz + i) == 'i' || *(niz + i) == 'o' ||
          *(niz + i) == 'u') {
         return niz + i;
      }
      i++;
   }
   return NULL;
}

int main() {
   char niz[MAXZN + 1], *pokNaPrviSamoglas;
   printf("Upisite niz > ");
   fgets(niz, MAXZN + 1, stdin);
   pokNaPrviSamoglas = traziPrviSamoglas(niz);
   if (pokNaPrviSamoglas == NULL) {
      printf("U nizu nema samoglasnika");
   } else {
      printf("%c %d", *pokNaPrviSamoglas, pokNaPrviSamoglas - niz);
   }
   return 0;
}