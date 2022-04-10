#include <stdio.h>
#define MAXCLAN 10

int main() {

   int a[MAXCLAN], i;

   printf("Upisite %d cijelih brojeva > ", MAXCLAN);
   for (i = 0; i < 10; i++) {
      scanf("%d", &a[i]);
   }

   for (i = MAXCLAN - 1; i >= 0; i--) {
      if (i < MAXCLAN - 1) {
         printf(", ", a[i]);
      }
      printf("%d", a[i]);
   }

   return 0;
}