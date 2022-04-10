#include <stdio.h>

int main() {
   int a, b, pomA, pomB, ostatak = 1, nzd;
   printf("Upisite a i b > ");
   scanf("%d %d", &a, &b);
   pomA = a;
   pomB = b;
   while (ostatak != 0) {
      ostatak = pomA % pomB;
      pomA = pomB;
      pomB = ostatak;
   }
   nzd = pomA;
   printf("Najveci zajednicki djelitelj %d i %d je %d", a, b, nzd);
   return 0;
}