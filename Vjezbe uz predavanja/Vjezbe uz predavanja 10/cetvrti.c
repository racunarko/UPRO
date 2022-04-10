#include <stdio.h>

int main() {
   int i;
   char znak1, znak2;
   printf("Upisite dva znaka > ");
   scanf("%c %c", &znak1, &znak2);

   if (znak1 > znak2) {
      for (i = znak1; i >= znak2; i--) {
         printf("%c", i);
      }
   } else {
      for (i = znak1; i <= znak2; i++) {
         printf("%c", i);
      }
   }
   return 0;
}