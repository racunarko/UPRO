#include <stdio.h>

int main() {
   struct tocka_s {
      double koordX;
      double koordY;
      float udaljenost;
   };
   int n;
   printf("Upisati n > ");
   scanf("%d", &n);
   struct tocka_s tocka[n];
   int i;
   float suma;
   for (i = 0; i < n; i++) {
      printf("  %d. tocka > ", i + 1);
      scanf("%lf %lf", &tocka[i].koordX, &tocka[i].koordY);
      suma = (tocka[i].koordX - 0) * (tocka[i].koordX - 0) +
             (tocka[i].koordY - 0) * (tocka[i].koordY - 0);
      tocka[i].udaljenost = suma;
   }
   int minInd = 0;
   for (i = 1; i < n; i++) {
      if (tocka[minInd].udaljenost > tocka[i].udaljenost) {
         minInd = i;
      }
   }
   printf("Najblize ishodistu su tocke:\n");
   for (i = 0; i < n; i++) {
      if (tocka[i].udaljenost == tocka[minInd].udaljenost) {
         printf("%6.2f %6.2f\n", tocka[i].koordX, tocka[i].koordY);
      }
   }
   return 0;
}