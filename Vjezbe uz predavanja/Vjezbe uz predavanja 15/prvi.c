#include <stdio.h>

int fibonacciN(int n) {
   int rez;
   if (n == 1 || n == 2) {
      rez = 1;
   } else {
      rez = fibonacciN(n - 1) + fibonacciN(n - 2);
   }
   return rez;
}

int main() {
   int n, x;
   printf("Upisite redni broj clana niza > ");
   scanf("%d", &n);
   printf("fibonacci(%d) = %d", n, fibonacciN(n));
   return 0;
}