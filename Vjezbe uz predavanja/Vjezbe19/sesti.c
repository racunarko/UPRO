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
   char niz[MAXZN + 1];
   int i = 0;
   printf("Upisite niz > ");
   fgets(niz, MAXZN + 1, stdin);
   printf("Svi samoglasnici: ");
   char *traziOdOvogMjesta = niz;
   char *pokNaPrvi = NULL;
   do {
      pokNaPrvi = traziPrviSamoglas(traziOdOvogMjesta);
      if (pokNaPrvi != NULL) {
         printf("%c", *pokNaPrvi);
         traziOdOvogMjesta = pokNaPrvi + 1;
      }
   } while (pokNaPrvi != NULL);
   return 0;
}