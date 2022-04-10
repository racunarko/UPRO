#include <stdio.h>

int main() {
   int bodovi;
   printf("Upisite broj bodova > ");
   scanf("%d", &bodovi);

   if (bodovi >= 0 && bodovi <= 9) {
      printf("nedovoljan");
   } else if (bodovi >= 10 && bodovi <= 13) {
      printf("dovoljan");
   } else if (bodovi >= 14 && bodovi <= 17) {
      printf("dobar");
   } else if (bodovi >= 18 && bodovi <= 21) {
      printf("vrlo dobar");
   } else if (bodovi >= 22 && bodovi <= 25) {
      printf("izvrstan");
   } else {
      printf("neispravni bodovi");
   }

   return 0;
}
