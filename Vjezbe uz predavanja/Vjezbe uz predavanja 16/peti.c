#include <math.h>
#include <stdio.h>

void izracKorijene(int n, double *p2, double *p3, double *p5) {
   *p2 = sqrt(n);
   *p3 = pow(n, 1 / 3.);
   *p5 = pow(n, 1 / 5.);
   return;
}

int main() {
   unsigned int n;
   double kor2, kor3, kor5;
   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &n);
   izracKorijene(n, &kor2, &kor3, &kor5);
   printf("Rezultati su:\n%.8lf\n%.8lf\n%.8lf", kor2, kor3, kor5);
   return 0;
}