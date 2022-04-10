#include <stdio.h>
#define BRCLANOVA 10

int main() {

   int p[BRCLANOVA], pomocna, i, j, min_ind;
   printf("Upisite %d cijelih brojeva > ", BRCLANOVA);
   for (i = 0; i < BRCLANOVA; i++) {
      scanf("%d", &p[i]);
   }
   for (i = 0; i < BRCLANOVA / 2; i++) {
      pomocna = p[i];
      p[i] = p[BRCLANOVA - 1 - i];
      p[BRCLANOVA - 1 - i] = pomocna;
   }

   for (i = 0; i < BRCLANOVA; i++) {
      if (i > 0) {
         printf(", ");
      }
      printf("%d", p[i]);
   }

   return 0;
}