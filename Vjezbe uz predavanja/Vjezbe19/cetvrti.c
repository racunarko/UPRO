#include <stdio.h>
#define MAXZN 20

void izbaciNR(char *niz) {
   int i = 0;
   while (*(niz + i) != '\0') {
      if (*(niz + i) == '\n') {
         *(niz + i) == '\0';
      }
      i++;
   }
   return;
}

_Bool umetniZnak(char *niz, char znak, int pozicija) {
   _Bool jeUmetnut = 0;
   int i = 0;
   while (*(niz + i) != '\0') {
      if (i == pozicija) {
         *(niz + i) = znak;
         jeUmetnut = 1;
         break;
      }
      i++;
   }
   return jeUmetnut;
}

int main() {
   char niz[MAXZN + 1], znak;
   int pozicija;
   printf("Upisite niz > ");
   fgets(niz, MAXZN + 1, stdin);
   printf("Upisite znak > ");
   scanf("%c", &znak);
   printf("Upisite poziciju > ");
   scanf("%d", &pozicija);
   izbaciNR(niz);
   if (umetniZnak(niz, znak, pozicija)) {
      printf("%s", niz);
   } else {
      printf("Neispravna pozicija");
   }
   return 0;
}