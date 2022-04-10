#include <math.h>
#include <stdio.h>

int main() {

   struct koordinate_s {
      double koordX;
      double koordY;
      double duljina;
   };

   int i, n;
   printf("Upisati n > ");
   scanf("%d", &n);

   struct koordinate_s tocka[n];
   double min_duljina;

   for (i = 0; i < n; i++) {
      printf("%3d. tocka > ", i + 1);
      scanf("%lf %lf", &tocka[i].koordX, &tocka[i].koordY);
      tocka[i].duljina =
          sqrt(pow(tocka[i].koordX, 2) + pow(tocka[i].koordY, 2));
   }

   min_duljina = tocka[0].duljina;
   for (i = 1; i < n; i++) {
      if (min_duljina > tocka[i].duljina) {
         min_duljina = tocka[i].duljina;
      }
   }

   printf("Najblize ishodistu su tocke:\n");
   for (i = 0; i < n; i++) {
      if (min_duljina == tocka[i].duljina) {
         printf("%6.2lf %6.2f\n", tocka[i].koordX, tocka[i].koordY);
      }
   }

   return 0;
}