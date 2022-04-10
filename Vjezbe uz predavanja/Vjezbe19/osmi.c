#include <stdio.h>
#define MAXZN 20

void izbaciNR(char *niz) {
   int i = 0;
   while (*(niz + i) != 0) {
      if (*(niz + i) == '\n') {
         *(niz + i) = '\0';
      }
      i++;
   }
   return;
}

void stvoriObrnutiNiz(char *niz1, char *niz2) {
   int i = 0;
   while (*(niz1 + i) != 0) {
      i++;
   }

   int duljina = i;
   *(niz2 + duljina) = '\0';
   for (i = duljina - 1; i >= 0; i--) {
      *(niz2 + duljina - 1 - i) = *(niz1 + i);
   }

   return;
}

int main() {
   char niz1[MAXZN + 1], niz2[MAXZN + 1];
   printf("Upisite niz > ");
   fgets(niz1, MAXZN + 1, stdin);
   izbaciNR(niz1);
   stvoriObrnutiNiz(niz1, niz2);
   printf("Originalni: %s\n", niz1);
   printf("Obrnuti   : %s", niz2);
   return 0;
}