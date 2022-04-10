#include <stdio.h>

unsigned long long kvadriraj(int n) {
   unsigned long long kvadrat;
   kvadrat = (unsigned long long)n * n;
   return kvadrat;
}

int main() {
   int n;
   unsigned long long kvadrat;
   printf("Upisite cijeli broj > ");
   scanf("%d", &n);
   kvadrat = kvadriraj(n);
   printf("%d na kvadrat jest %llu", n, kvadrat);
   return 0;
}