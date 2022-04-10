#include <stdio.h>
#define MAX_ZNAK 50

int main() {

   char recenica[MAX_ZNAK + 1];
   int i, brZnakova = 0, brRijeci = 0, max_pozicija = 0, max_duljina = 0,
          duljina = 0, pozicija = 0;

   printf("Niz > ");
   fgets(recenica, MAX_ZNAK + 1, stdin);

   i = 0;
   while (recenica[i] != '\0') {
      if (recenica[i] == '\n') {
         recenica[i] == '\0';
      }
      brZnakova++;
      if (recenica[i] == ' ' || recenica[i] == '.') {
         brRijeci++;
      }
      i++;
   }

   for (i = 0; i < brZnakova; i++) {
      if (recenica[i] == ' ' || recenica[i] == '.') {
         if (duljina > max_duljina) {
            max_duljina = duljina;
            max_pozicija = i - duljina;
         }
         duljina = 0;
      } else {
         duljina++;
      }
   }

   printf("Broj rijeci: %d", brRijeci);
   printf("\nNajdulja rijec: ");
   for (i = max_pozicija; i < max_pozicija + max_duljina; i++) {
      printf("%c", recenica[i]);
   }

   return 0;
}