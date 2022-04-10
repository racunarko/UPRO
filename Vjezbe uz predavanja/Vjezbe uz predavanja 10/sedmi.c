#include <stdio.h>
#define DONJA_GR 1U
#define GORNJA_GR 4250000000U

int main() {
   unsigned int n;
   unsigned int long long kvadrat;
   printf("Upisite prirodni broj u granicama [%u, %u] > ", DONJA_GR, GORNJA_GR);
   scanf("%u", &n);
   kvadrat = 1ULL * n * n;
   printf("%u * %u = %llu", n, n, kvadrat);
   return 0;
}