#include <stdio.h>

int main() {
   float x, y;
   printf("Upisite dva realna broja > ");
   scanf("%f %f", &x, &y);

   if (((x >= 5 && x <= 20) || (y >= 5 && y <= 20)) && (x < y)) {
      printf("Istina je.\n");
   } else {
      printf("Nije istina.\n");
   }

   return 0;
}