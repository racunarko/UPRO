#include <stdio.h>

int main() {

   int gledatelji, filmovi;
   printf("Upisite dimenzije dvodimenzijskog polja > ");
   scanf("%d %d", &gledatelji, &filmovi);

   int ocjene[gledatelji][filmovi];
   int i, j;
   for (i = 0; i < gledatelji; i++) {
      printf("Upisite ocjene %d. gledatelja > ", i);
      for (j = 0; j < filmovi; j++) {
         scanf("%d", &ocjene[i][j]);
      }
   }

   float prosjecna, suma;
   int max, max_ind;
   for (i = 0; i < gledatelji; i++) {
      suma = 0;
      max = ocjene[i][0];
      max_ind = 0;
      suma += max;
      for (j = 1; j < filmovi; j++) {
         if (max < ocjene[i][j]) {
            max = ocjene[i][j];
            max_ind = j;
         }
         suma += ocjene[i][j];
      }
      prosjecna = suma / filmovi;
      printf("%d. gledatelj je dao najvecu ocjenu %d. filmu, a prosjecna "
             "ocjena kojom je ocijenio filmove iznosi %.1f\n",
             i, max_ind, prosjecna);
   }

   return 0;
}