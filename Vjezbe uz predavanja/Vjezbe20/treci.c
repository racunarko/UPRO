#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GG 15.0f
#define DG 10.0f
#define BRRAZREDA 10
#define MAX 5000000

int main() {
   int index, brojac[BRRAZREDA] = {0};
   float slucajni;
   srand((unsigned)time(NULL));
   for (int i = 0; i < MAX; i++) {
      slucajni = (float)rand() / RAND_MAX * (GG - DG) + DG;
      index =
          slucajni == GG ? BRRAZREDA - 1 : (int)(slucajni * 2) - (int)DG * 2;
      ++brojac[index];
   }
   for (int i = 0; i < BRRAZREDA; i++) {
      printf("[%4.1f - %4.1f%c -> %7d\n", DG + i / 2.f, DG + (i + 1) / 2.f,
             i == BRRAZREDA ? ']' : ')', brojac[i]);
   }
   return 0;
}