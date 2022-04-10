#include <stdio.h>

int main() {
   int n = 11, sumirani = 1, suma = 0, des = 0, jed = 0;
   while (sumirani <= 1000) {
      n++;
      des = n % 100 / 10;
      jed = n % 10;
      if (n % 7 == 0 || (des + jed) == 5) {
         suma = suma + n;
         sumirani++;
      }
   }
   printf("%d", suma);
   return 0;
}