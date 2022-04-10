#include <stdio.h>

void zamijeni(double *a, double *b) {
   double pom;
   pom = *a;
   *a = *b;
   *b = pom;
   return;
}

void poredaj(double *pa, double *pb, double *pc) {
   if (*pa > *pb) {
      zamijeni(pa, pb);
   }
   if (*pa > *pc) {
      zamijeni(pa, pc);
   }
   if (*pb > *pc) {
      zamijeni(pb, pc);
   }
   return;
}

int main() {
   double a, b, c;
   printf("Upisite tri realna broja > ");
   scanf("%lf %lf %lf", &a, &b, &c);
   poredaj(&a, &b, &c);
   printf("%lf %lf %lf", a, b, c);
   return 0;
}