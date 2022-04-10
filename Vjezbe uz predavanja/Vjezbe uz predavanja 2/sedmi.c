#include <stdio.h>

int main() {
   int a, b;
   int pom;

   printf("Upisite 2 cijela broja > ");
   scanf("%d %d", &a, &b);

   pom = a % 10;
   a = b % 10;
   b = pom;

   printf("a = %d\nb = %d", a, b);

   return 0;
}