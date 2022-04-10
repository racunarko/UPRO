#include <stdio.h>

int main() {
   int n, prethClan, clanNiza = 0, i, a = 0;
   printf("Upisite prirodni broj n > ");
   scanf("%d", &n);
   while (clanNiza != 1) {
      for (i = 0; i < 10; i++) {
         if (a == 0) {
            clanNiza = n;
         } else {
            if (prethClan % 2 == 0) {
               clanNiza = prethClan / 2;
            } else {
               clanNiza = prethClan * 3 + 1;
            }
         }
         printf("%d ", clanNiza);
         a++;
         prethClan = clanNiza;
         if (clanNiza == 1) {
            break;
         }
      }
      printf("\n");
   }
   printf("za n = %d, total stopping time = %d", n, a - 1);
   return 0;
}