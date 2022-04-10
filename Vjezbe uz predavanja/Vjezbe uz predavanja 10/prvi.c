#include <stdio.h>

int main() {
   int cijeli;
   printf("Upisite dekadski cijeli broj > ");
   scanf("%d", &cijeli);
   while (cijeli != 0) {
      printf("%11o\n%8X\n", cijeli, cijeli);
      printf("Upisite dekadski cijeli broj > ");
      scanf("%d", &cijeli);
   }
   return 0;
}