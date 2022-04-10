#include <stdio.h>

int main() {
   int operacija, a, b;
   printf("1. a + b\n"
          "2. a - b\n"
          "3. a * b\n"
          "4. a / b\n"
          "Upisite redni broj operacije > ");
   scanf("%d", &operacija);
   if (operacija > 0 && operacija < 5) {
      printf("Upisite operande > ");
      scanf("%d %d", &a, &b);

      switch (operacija) {
      case 1:
         printf("%d + %d = %d", a, b, a + b);
         break;
      case 2:
         printf("%d - %d = %d", a, b, a - b);
         break;
      case 3:
         printf("%d * %d = %d", a, b, a * b);
         break;
      case 4:
         if (b != 0) {
            printf("%d / %d = %d", a, b, a / b);
         } else {
            printf("Neispravni operandi");
         }
         break;
      }
   }
   return 0;
}