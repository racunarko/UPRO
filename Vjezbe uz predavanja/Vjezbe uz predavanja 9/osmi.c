#include <stdio.h>

int main() {
   int n, i, j, maxInd;
   struct pretinci_s {
      int sifra;
      int visina;
      int sirina;
      int dubina;
      float volumen;
   };
   printf("Upisite broj pretinaca > ");
   scanf("%d", &n);
   struct pretinci_s pretinac[n], pomocni;
   printf("Upisite podatke za pretince (%d)\n", n);
   for (i = 0; i < n; i++) {
      printf("%d. pretinac > ", i + 1);
      scanf("%d %d %d %d", &pretinac[i].sifra, &pretinac[i].visina,
            &pretinac[i].sirina, &pretinac[i].dubina);
      pretinac[i].volumen = (float)pretinac[i].sirina * pretinac[i].visina *
                            pretinac[i].dubina / 1000;
   }
   for (i = 0; i < n - 1; i++) {
      maxInd = i + 1;
      for (j = i + 2; j < n; j++) {
         if (pretinac[j].volumen > pretinac[maxInd].volumen) {
            maxInd = j;
         }
      }
      if (pretinac[maxInd].volumen > pretinac[i].volumen) {
         pomocni = pretinac[i];
         pretinac[i] = pretinac[maxInd];
         pretinac[maxInd] = pomocni;
      }
   }
   printf("Sortirani pretinci:\n");
   for (i = 0; i < n; i++) {
      printf("%d = %6.2f litara\n", pretinac[i].sifra, pretinac[i].volumen);
   }
   return 0;
}