#include <math.h>
#include <stdio.h>

typedef struct {
   double x;
   double y;
} tocka_t;

tocka_t polje[5];

struct tocka_t *pokNaNajblizuTocku(struct tocka_t *tocka, int n) {
   double udalj, min;
   struct tocka_t *pok = NULL;
   int prviProlaz = 1;
   for (int i = 0; i < n; i++) {
      udalj = sqrt(pow((tocka + i)->x, 2) + pow((tocka + i)->y, 2));
      if (prviProlaz) {
         min = udalj;
         prviProlaz = 0;
      }
      if (udalj < min) {
         min = udalj;
      }
   }
   for (int i = 0; i < n; i++) {
      udalj = sqrt(pow((tocka + i)->x, 2) + pow((tocka + i)->y, 2));
      if (udalj == min) {
         min = udalj;
         pok = tocka + i;
      }
   }
   return pok;
}

int main() {

   int n = 5;
   int *pok;
   pok = pokNaNajblizuTocku(&polje[0], n);
}
