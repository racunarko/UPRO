#include <stdio.h>

int main(void) {
   float xa, ya, xb, yb, xc, yc;
   float xTezista, yTezista;

   printf("Upisite koordinate vrha trokuta A > ");
   scanf("%f %f", &xa, &ya);
   printf("Upisite koordinate vrha trokuta B > ");
   scanf("%f %f", &xb, &yb);
   printf("Upisite koordinate vrha trokuta C > ");
   scanf("%f %f", &xc, &yc);

   xTezista = (xa + xb + xc) / 3;
   yTezista = (ya + yb + yc) / 3;

   printf("Teziste trokuta A(%.2f, %.2f), B(%.2f, %.2f), C(%.2f, %.2f) jest "
          "T(%.2f, %.2f)",
          xa, ya, xb, yb, xc, yc, xTezista, yTezista);
   return 0;
}