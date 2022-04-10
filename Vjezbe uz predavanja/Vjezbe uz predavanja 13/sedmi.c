#include <stdio.h>

int main() {
   int i = 23, j = 13, k = 11, m;
   printf("%d\n", i || j && k);
   printf("%d\n", i | j & k);
   m = i == j && k;
   printf("%d %d\n", m, -!m < 0);
   m = i ^ (j = 13);
   printf("%d %d\n", m, j);
   j = 7;
   m = 7;
   m = i & ~(j == 7);
   printf("%d\n", m);
   m = ~(~k | k);
   printf("%d\n", m);
   return 0;
}