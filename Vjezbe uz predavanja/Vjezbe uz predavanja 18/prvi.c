#include <stdio.h>
#define MAXZN 20

void izbaciNR(char *niz) {
   int i = 0;
   while (*(niz + i) != '\0') {
      if (*(niz + i) == '\n') {
         *(niz + i) = '\0';
      }
      i++;
   }
}

int main() {
   char niz[MAXZN + 1];
   printf("Upisite niz > ");
   fgets(niz, MAXZN + 1, stdin);
   izbaciNR(niz);
   printf("%s!", niz);
   return 0;
}