#include <stdio.h>
#define MAX_ZNAK 20

int main() {
   char niz[MAX_ZNAK + 1], malaSlova[MAX_ZNAK + 1], velikaSlova[MAX_ZNAK + 1];
   int ind_niz = 0, ind_mala = 0, ind_velika = 0;
   printf("Upisati niz > ");
   fgets(niz, MAX_ZNAK + 1, stdin);

   while (niz[ind_niz] != '\0') {
      if ((niz[ind_niz] >= 'A' && niz[ind_niz] <= 'Z') ||
          (niz[ind_niz] >= '0' && niz[ind_niz] <= '9')) {
         velikaSlova[ind_velika] = niz[ind_niz];
         ind_velika++;
      } else if (niz[ind_niz] >= 'a' && niz[ind_niz] <= 'z') {
         malaSlova[ind_mala] = niz[ind_niz];
         ind_mala++;
      }
      ind_niz++;
   }
   malaSlova[ind_mala] = '\0';
   velikaSlova[ind_velika] = '\0';

   printf("%d; %s\n", ind_mala, malaSlova);
   printf("%d; %s\n", ind_velika, velikaSlova);

   return 0;
}