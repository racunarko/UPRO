#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXBR 1000000
#define GORNJAGR 60
#define DONJAGR 50

int main() {
   int polje[GORNJAGR - DONJAGR + 1] = {0};
   int slucajan;
   srand((unsigned)time(NULL));

   for (int i = 0; i < MAXBR; i++) {
      slucajan = rand() % (GORNJAGR - DONJAGR + 1) + DONJAGR;
      ++polje[slucajan - DONJAGR];
   }

   for (int i = 0; i < (GORNJAGR - DONJAGR + 1); i++) {
      printf("%d  %d\n", i + DONJAGR, polje[i]);
   }

   return 0;
}