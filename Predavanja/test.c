#include <stdio.h>

int main() {
   int x = 2, y = 5;
   if (x < y)
      x = -3;
   else
      x = 0;
   x = x + 1;
   while (x != 0) {
      x = x + 1;
      break;
   }
   return 0;
}