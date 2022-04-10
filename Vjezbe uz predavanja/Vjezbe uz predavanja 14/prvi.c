#include <stdio.h>

int kvadriraj(int n) {
   int kvadrat;
   kvadrat = n * n;
   return kvadrat;
}

int main() {
   int n, kvadrat;
   printf("Upisite cijeli broj > ");
   scanf("%d", &n);
   kvadrat = kvadriraj(n);
   printf("%d na kvadrat jest %d", n, kvadrat);
   return 0;
}