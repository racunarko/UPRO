#include <stdio.h>

int main() {
   int dan, mjesec, godina;
   printf("Upisite dan, mjesec i godinu > ");
   scanf("%d %d %d", &dan, &mjesec, &godina);
   printf("%d. ", dan);
   switch (mjesec) {
   case 1:
      printf("sijecnja");
      break;
   case 2:
      printf("veljace");
      break;
   case 3:
      printf("ozujka");
      break;
   case 4:
      printf("travnja");
      break;
   case 5:
      printf("svibnja");
      break;
   case 6:
      printf("lipnja");
      break;
   case 7:
      printf("srpnja");
      break;
   case 8:
      printf("kolovoza");
      break;
   case 9:
      printf("rujna");
      break;
   case 10:
      printf("listopada");
      break;
   case 11:
      printf("studenog");
      break;
   case 12:
      printf("prosinca");
      break;
   }
   printf(" %d.", godina);
   return 0;
}