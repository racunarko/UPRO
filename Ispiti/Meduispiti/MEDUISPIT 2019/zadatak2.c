#include <math.h>
#include <stdio.h>

int main() {
   int n, i;
   struct tocka_s {
      float x;
      float y;
   };
   float udaljenost, min_udaljenost;

   printf("Upisati n > ");
   scanf("%d", &n);
   struct tocka_s tocka[n];

   for (i = 0; i < n; i++) {
      printf("%3d. tocka >", i + 1);
      scanf("%f %f", &tocka[i].x, &tocka[i].y);
      udaljenost = sqrt(pow(tocka[i].x, 2) + pow(tocka[i].y, 2));
      if (i == 0) {
         min_udaljenost = udaljenost;
      } else if (udaljenost < min_udaljenost) {
         min_udaljenost = udaljenost;
      }
   }

   printf("Najblize ishodistu su tocke:\n");
   for (i = 0; i < n; i++) {
      udaljenost = sqrt(pow(tocka[i].x, 2) + pow(tocka[i].y, 2));
      if (udaljenost == min_udaljenost) {
         printf("%6.2lf %6.2lf\n", tocka[i].x, tocka[i].y);
      }
   }

   return 0;
}
