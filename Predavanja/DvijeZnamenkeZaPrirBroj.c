#include <stdio.h>

int main() {
   int n, pomN, prva, zadnja;
   printf("Upisite prirodan broj > ");
   scanf("%d", &n);
   pomN = n;
   zadnja = pomN % 10;
   while (pomN > 10) {
      pomN = pomN / 10;
   }
   prva = pomN % 10;
   printf("Zbroj prve i zadnje znamenke broja %d je %d", n, prva + zadnja);
   return 0;
}