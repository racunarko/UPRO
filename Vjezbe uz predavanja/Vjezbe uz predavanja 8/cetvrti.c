#include <stdio.h>
#define MAXCLANOVA 40

int main() {

   int i, fibonacci[MAXCLANOVA] = {[0] = 1, [1] = 1};

   for (i = 2; i < MAXCLANOVA; i++) {
      fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
   }

   for (i = 0; i < MAXCLANOVA; i++) {
      printf("%d\n", fibonacci[i]);
   }

   return 0;
}