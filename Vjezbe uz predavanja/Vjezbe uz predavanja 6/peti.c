#include <stdio.h>

int main() {
   int n, zn, dekadski = 0, i;
   printf("Upsiite cijeli broj n > ");
   scanf("%d", &n);

   if (n < 1 || n > 10) {
      printf("Broj je neispravan");
   } else {
      for (i = 0; i < n; i++) {
         scanf("%d", &zn);
         dekadski = dekadski * 8 + zn;
      }
      printf("= %d", dekadski);
   }
   return 0;
}