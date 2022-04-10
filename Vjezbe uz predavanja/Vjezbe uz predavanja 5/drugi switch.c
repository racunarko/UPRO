#include <stdio.h>

int main() {
   int bodovi;
   printf("Upisite broj bodova > ");
   scanf("%d", &bodovi);
   switch (bodovi) {
   case 0:
   case 1:
   case 2:
   case 3:
   case 4:
   case 5:
   case 6:
   case 7:
   case 8:
   case 9:
      printf("nedovoljan");
      break;
   case 10:
   case 11:
   case 12:
   case 13:
      printf("dovoljan");
      break;
   case 14:
   case 15:
   case 16:
   case 17:
      printf("dobar");
      break;
   case 18:
   case 19:
   case 20:
   case 21:
      printf("vrlo dobar");
      break;
   case 22:
   case 23:
   case 24:
   case 25:
      printf("izvrstan");
      break;
   default:
      printf("neispravni bodovi");
      break;
   }
   return 0;
}