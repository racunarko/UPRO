#include <stdio.h>
#include <stdlib.h>

void generirajLozinku(unsigned int sjeme, const char *znakoviZaLozinku,
                      int duljLoz, char *lozinka) {
   int jeInicijaliziran = 0;
   if (!jeInicijaliziran) {
      srand(sjeme);
      jeInicijaliziran = 1;
   }
   int brZnakova;
   char slucajanInd;
   brZnakova = strlen(znakoviZaLozinku);
   int i;
   for (i = 0; i < duljLoz; i++) {
      slucajanInd = rand() % (brZnakova);
      *(lozinka + i) = *(znakoviZaLozinku + slucajanInd);
   }
   *(lozinka + i) = '\0';
   return;
}