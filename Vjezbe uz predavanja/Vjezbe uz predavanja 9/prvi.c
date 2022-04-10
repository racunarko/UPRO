#include <stdio.h>

int main() {

   float polje[5][7] = {
       {[5] = 0.9}, [2] = {31.1, 32.2, 33.3, 34.2}, [3] = {1, 4, [6] = 7.7}};
   int i, j;
   for (i = 0; i < 5; i++) {
      for (j = 0; j < 7; j++) {
         printf("%5.1f", polje[i][j]);
      }
      printf("\n");
   }

   return 0;
}