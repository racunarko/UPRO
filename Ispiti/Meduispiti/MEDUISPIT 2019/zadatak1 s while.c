#include <stdio.h>
#define MAX_ZNAK 40
#define POTREBNO 3

int main() {
   char nizA[MAX_ZNAK + 1], nizB[MAX_ZNAK + 1], izlaz[MAX_ZNAK + 1];
   int ind_nizA, ind_nizB, ind_izlaz = 0, counter;

   printf("niz A > ");
   fgets(nizA, MAX_ZNAK + 1, stdin);
   printf("niz B > ");
   fgets(nizB, MAX_ZNAK + 1, stdin);

   ind_nizA = 0;
   while (nizA[ind_nizA] != '\0') {
      counter = 0;
      ind_nizB = 0;
      while (nizB[ind_nizB] != '\0') {
         if (nizA[ind_nizA] == nizB[ind_nizB]) {
            counter++;
         }
         ind_nizB++;
      }
      if (counter >= POTREBNO) {
         izlaz[ind_izlaz] = nizA[ind_nizA];
         ind_izlaz++;
      }
      ind_nizA++;
   }
   izlaz[ind_izlaz] = '\0';

   printf("izlaz > %s\n", izlaz);

   return 0;
}