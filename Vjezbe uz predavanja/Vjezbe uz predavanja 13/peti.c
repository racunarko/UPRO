#include <stdio.h>

int main() {
   char c, c1;
   c = 'a' / 2 * 1.1;
   printf("%d\n", c);
   c1 = 1 + c++;
   printf("%d %d\n", c, c1);
   c1 = ++c + 12;
   printf("%d %c %d %c\n", c, c, c1, c1);
   return 0;
}