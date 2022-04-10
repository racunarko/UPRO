#include <stdio.h>

int main() {
   int a, b, pom;
   printf("Upisite dva cijela broja > ");
   scanf("%d %d", &a, &b);
   if (a == b) {
      printf("Brojevi su jednaki\n");
      printf("a = b = %d", a);
   } else {
      if (a > b) {
         pom = a;
         a = b;
         b = pom;
         printf("Zamjena je obavljena\n");

      } else {
         printf("Zamjena nije obavljena\n");
      }
      printf("a = %d, b = %d", a, b);
   }
   return 0;
}