#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int n;
   do {
      printf("Upisite n > ");
      scanf("%d", &n);
      if (n < 3 || n > 60) {
         printf("Neispravan unos!\n");
      }
   } while (n < 3 || n > 60);
   srand((unsigned)time(NULL));
   int i = 0;
   for (i = 0; i < n; i++) {
      printf("%c", rand() % ((int)'Z' - (int)'A' + 1) + (int)'A');
   }
   return 0;
}