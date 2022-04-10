#include <stdio.h>

int main() {
   int n = 3, brojeva = 0;
   while (brojeva < 50) {
      if (n % 3 == 0 || n % 7 == 0) {
         if (brojeva % 10 == 0) {
            if (brojeva != 0) {
               printf("\n");
            }
         } else {
            printf(", ");
         }
         printf("%d", n);
         brojeva++;
      }
      n++;
   }
}