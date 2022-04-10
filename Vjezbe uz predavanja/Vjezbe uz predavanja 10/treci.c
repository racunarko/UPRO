#include <stdio.h>

int main() {
   int n;
   do {
      printf("Upisite cijeli broj > ");
      scanf("%d", &n);

      if (n >= 'a' && n <= 'z' || n >= 'A' && n <= 'Z' ||
          n >= '0' && n <= '9') {
         printf("%d %c\n", n, n);
      }

   } while (n >= 'a' && n <= 'z' || n >= 'A' && n <= 'Z' ||
            n >= '0' && n <= '9');
   return 0;
}