#include <math.h>
#include <stdio.h>

unsigned long long fakt(unsigned int n) {
   unsigned int i;
   unsigned long long umnozak = 1ULL;
   for (i = 2U; i <= n; ++i) {
      umnozak = umnozak * i;
      return umnozak;
   }
}

float sinus(double x, unsigned int n) {
   int i, j;
   double sinx = 0;
   for (i = 1; i <= n; i++) {
      sinx += pow(-1, i + 1) * (pow(x, 2 * i - 1)) / fakt(2 * i - 1);
   }
   return sinx;
}

int main() {
   double x;
   unsigned int n;
   printf("Upisite x i n > ");
   scanf("%lf %u", &x, &n);
   double sinf, sinp, delta;
   sinf = sin(x);
   sinp = sinus(x, n);
   delta = sinp - sinf;
   printf("sinus(%.15lf) = %.15lf\n", x, sinp);
   printf("  sin(%.15lf) = %.15lf\n", x, sinf);
   printf("                 razlika = %.15lf", delta);
   return 0;
}