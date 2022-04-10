#include <stdio.h>
#define MAX_ZNAK 40

int main() {
   char nizA[MAX_ZNAK + 1], nizB[MAX_ZNAK + 1], izlaz[MAX_ZNAK + 1];
   int i, j, ind_izlaz = 0, counter;

   printf("niz A > ");
   fgets(nizA, MAX_ZNAK + 1, stdin);
   printf("niz B > ");
   fgets(nizB, MAX_ZNAK + 1, stdin);

   for (i = 0; nizA[i] != '\n'; i++) {
      counter = 0;
      for (j = 0; nizB[j] != '\n'; j++) {
         if (nizA[i] == nizB[j]) {
            counter++;
         }
      }
      if (counter >= 3) {
         izlaz[ind_izlaz] = nizA[i];
         ind_izlaz++;
      }
   }
   izlaz[ind_izlaz] = '\0';

   printf("izlaz > %s\n", izlaz);

   return 0;
}