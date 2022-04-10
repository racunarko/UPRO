#include <math.h>
#include <stdio.h>

int main() {
   float a, b, a_preth, b_preth;
   int i, n;
   printf("Upisite a, b, n > ");
   scanf("%f %f %d", &a, &b, &n);
   for (i = 1; i <= n; i++) {
      if (i > 1) {
         a = (a_preth + b_preth) / 2;
         b = sqrt(a_preth * b_preth);
      }
      printf("A(%d)=%8.3f  B(%d)=%8.3f\n", i + 1, a, i + 1, b);
      a_preth = a;
      b_preth = b;
   }
   return 0;
}