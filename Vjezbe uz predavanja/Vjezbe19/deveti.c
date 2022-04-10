#include <math.h>
#include <stdio.h>

typedef struct {
   double x;
   double y;
} tTocka;

double udaljToc(tTocka *t1, tTocka *t2) {
   double udaljenost;
   udaljenost = (sqrt)(pow(((t2->x) - (t1->x)), 2) + pow((t2->y) - (t1->y), 2));
   return udaljenost;
}

int main(void) {
   tTocka t1, t2;
   double udaljenost;
   printf("Upisite koordinate 1. tocke > ");
   scanf("%lf %lf", &t1.x, &t1.y);
   printf("Upisite koordinate 2. tocke > ");
   scanf("%lf %lf", &t2.x, &t2.y);
   udaljenost = udaljToc(&t1, &t2);
   printf("%lf", udaljenost);
   return 0;
}