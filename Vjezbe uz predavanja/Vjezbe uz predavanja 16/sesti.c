#include <stdio.h>

int maks(int *p1, int *p2) {
   int max = *p1;
   if (*p2 > max) {
      max = *p2;
   }
   return max;
}

int main() {
   int a, b;
   printf("Upisite dva cijela broja > ");
   scanf("%d %d", &a, &b);
   printf("Rezultat je %d", maks(&a, &b));
   return 0;
}