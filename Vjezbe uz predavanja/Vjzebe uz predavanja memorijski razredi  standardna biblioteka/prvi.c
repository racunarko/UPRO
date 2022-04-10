#include <stdbool.h>
#include <stdio.h>

#define MAXPRIM 10000

int getPrime(int rbrPrim) {
   int prim[rbrPrim];

   int slobodniInd = 1;
   int kandidat = 3;

   prim[0] = 2;

   while (slobodniInd < rbrPrim) {
      bool jestPrim = true;
      int indPrim = 1;
      while (indPrim < slobodniInd && jestPrim) {
         if (kandidat % prim[indPrim] == 0) {
            jestPrim = false;
         }
         ++indPrim;
      }
      if (jestPrim) {
         prim[slobodniInd] = kandidat;
         ++slobodniInd;
      }
      kandidat += 2;
   }
   return prim[rbrPrim - 1];
}

int main() {
   int suma = 0;
   int gg = 500;
   for (int i = 1; i <= gg; ++i) {
      suma += getPrime(i);
   }
   printf("Suma prvih %4d = %8d\n", gg, suma);
   suma = 0;
   gg = 300;
   for (int i = 1; i <= gg; ++i) {
      suma += getPrime(i);
   }
   printf("Suma prvih %4d = %8d\n", gg, suma);
   return 0;
}