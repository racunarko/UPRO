#include <stdio.h>

int main() {
   int i1 = 5, i2, j1 = 5, j2, k1, k2;
   i2 = ++i1 + 3;
   printf("%d %d\n", i1, i2);
   j2 = j1++ + 3;
   printf("%d %d\n", j1, j2);
   k1 = i2++ * --j2;
   printf("%d %d %d\n", i2, j2, k1);
   i2++;
   ++j2;
   k2 = ++i2 * j2++;
   printf("%d %d %d\n", i2, j2, k2);
   return 0;
}