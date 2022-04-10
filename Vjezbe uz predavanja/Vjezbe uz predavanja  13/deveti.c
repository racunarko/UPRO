#include <stdio.h>

int main() {
   char x, y, z;
   x = 2;
   y = '1';
   z = (y <= x) ? (++x) : (y += ++x);
   printf("%d %c %d %c", x, y, y, z);
   return 0;
}