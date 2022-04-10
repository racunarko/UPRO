#include <stdio.h>

int main() {
   char niz[50];
   int i, brRijeci = 0, brZnakova, duljina = 0, maxDuljina, maxPoz;
   printf("Niz > ");
   fgets(niz, 50, stdin);
   i = 0;
   while (niz[i] != '\0') {
      if (niz[i] == '\n') {
         niz[i] = '\0';
      }
      if (niz[i] == ' ' || niz[i] == '.') {
         brRijeci++;
      }
      i++;
   }
   brZnakova = i - 1;
   maxDuljina = 0;
   maxPoz = 0;
   while (niz[i] != '\0') {
      if (niz[i] == ' ' || niz[i] == '.') {
         if (maxDuljina < duljina) {
            maxDuljina = duljina;
            maxPoz = i - duljina;
         }
         duljina = 0;
      } else {
         duljina++;
      }
      i++;
   }
   printf("Broj rijeci: %d\n", brRijeci);
   printf("Najdulja rijec: ");
   for (i = maxPoz; i <= maxDuljina; i++) {
      printf("%c", niz[i]);
   }
   return 0;
}