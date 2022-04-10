#include <math.h>
#include <stdio.h>

unsigned long long fakt(unsigned int n) {
   unsigned int i;
   unsigned long long umnozak = 1ULL;
   for (i = 2U; i <= n; i++) {
      umnozak = umnozak * i;
   }
   return umnozak;
}

double sinus(double x, unsigned int n) {
   double clan, suma = 0;
   int predznak = 1;
   unsigned int i;
   for (i = 1U; i <= n; i++) {
      clan = predznak * pow(x, 2 * i - 1) / fakt(2 * i - 1);
      suma = suma + clan;
      predznak = (-1) * predznak;
   }
   return suma;
}

int main() {
   double x, sinRez, sinRac;
   unsigned int n;
   printf("Upisite x i n > ");
   scanf("%lf %u", &x, &n);
   sinRez = sin(x);
   sinRac = sinus(x, n);
   printf("sinus(%.15f) = %.15f\n", x, sinRac);
   printf("  sin(%.15f) = %.15f\n", x, sinRez);
   printf("                 razlika = %.15lf\n", sinRac - sinRez);
   return 0;
}