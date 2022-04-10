#include <stdio.h>

int main() {
   int i, j;
   for (i = 'A'; i <= 'U'; i++) {
      printf("%c. ", i);
      for (j = i + 'a' - 'A'; j < i + 'a' - 'A' + 6; j++) {
         printf("%c ", j);
      }
      printf(".%c\n", j - 1 + 'A' - 'a');
   }
   return 0;
}