#include <stdio.h>
#define BRZNAM 31

int main() {
   int dekadski, binarni[BRZNAM], n = 0, i;
   printf("Upisite cijeli broj > ");
   scanf("%d", &dekadski);

   while (dekadski > 0) {
      binarni[n] = dekadski % 2;
      n++;
      dekadski = dekadski / 2;
   }

   for (i = n - 1; i >= 0; i--) {
      printf("%d", binarni[i]);
   }

   return 0;
}