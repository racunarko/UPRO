#include <stdio.h>

void fibonacciN(int maxClanova) {
   int fibonacci[maxClanova];
   int i;
   if (maxClanova > 0)
      fibonacci[0] = 1;
   if (maxClanova > 1)
      fibonacci[1] = 1;
   for (i = 2; i < maxClanova; i++) {
      fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
   }
   for (i = 0; i < maxClanova; i++) {
      if (i > 0) {
         printf(", ");
      }
      printf("%d", fibonacci[i]);
   }
   return;
}

int main() {
   int brClanova;
   printf("Upisite broj clanova > ");
   scanf("%d", &brClanova);
   fibonacciN(brClanova);
   return 0;
}