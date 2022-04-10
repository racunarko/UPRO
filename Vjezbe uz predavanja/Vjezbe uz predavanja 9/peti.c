#include <stdio.h>
#define REDMATR 11
int main() {
   int mat[REDMATR][REDMATR], i, j;

   for (i = 0; i < REDMATR; i++) {
      for (j = 0; j < REDMATR; j++) {
         if (i == j || i == 0 || i == REDMATR - 1 || j == 0 ||
             j == REDMATR - 1 || j == REDMATR - 1 - i) {
            mat[i][j] = 1;
         } else {
            mat[i][j] = 8;
         }
      }
   }
   printf("Generirana kvadratna matrica:\n");
   for (i = 0; i < REDMATR; i++) {
      for (j = 0; j < REDMATR; j++) {
         printf("%2d", mat[i][j]);
      }
      printf("\n");
   }

   return 0;
}