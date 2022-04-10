#include <stdio.h>
#define MAX_ZNAK 30

char flipCase(char c) {
   if (c >= 'A' && c <= 'Z') {
      c = c + 'a' - 'A';
   } else if (c >= 'a' && c <= 'z') {
      c = c - ('a' - 'A');
   }
   return c;
}

int main() {
   char niz[MAX_ZNAK + 1];
   int i = 0;

   printf("Upisite niz > ");
   fgets(niz, MAX_ZNAK + 1, stdin);

   while (niz[i] != '\0') {
      if (niz[i] == '\n') {
         niz[i] = '\0';
      }
      niz[i] = flipCase(niz[i]);
      i++;
   }

   printf("Rezultat    > %s\n", niz);

   return 0;
}
