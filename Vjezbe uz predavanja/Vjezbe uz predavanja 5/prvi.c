#include <stdio.h>

int main() {
   int dan, mjesec, godina;
   printf("Upisite dan, mjesec i godinu > ");
   scanf("%d %d %d", &dan, &mjesec, &godina);
   printf("%d. ", dan);
   if (mjesec == 1) {
      printf("sijecnja");
   } else if (mjesec == 2) {
      printf("veljace");
   } else if (mjesec == 3) {
      printf("ozujka");
   } else if (mjesec == 4) {
      printf("travnja");
   } else if (mjesec == 5) {
      printf("svibnja");
   } else if (mjesec == 6) {
      printf("lipnja");
   } else if (mjesec == 7) {
      printf("srpnja");
   } else if (mjesec == 8) {
      printf("kolovoza");
   } else if (mjesec == 9) {
      printf("rujna");
   } else if (mjesec == 10) {
      printf("listopada");
   } else if (mjesec == 11) {
      printf("studenog");
   } else if (mjesec == 12) {
      printf("prosinca");
   }
   printf(" %d.", godina);
   return 0;
}