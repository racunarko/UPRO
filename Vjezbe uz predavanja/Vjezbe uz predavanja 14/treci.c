#include <stdio.h>

float kvadriraj(float n) {
   float kvadrat;
   kvadrat = n * n;
   return kvadrat;
}

int main() {
   float n, kvadrat;
   printf("Upisite cijeli broj > ");
   scanf("%f", &n);
   kvadrat = kvadriraj(n);
   printf("%f na kvadrat jest %f", n, kvadrat);
   return 0;
}