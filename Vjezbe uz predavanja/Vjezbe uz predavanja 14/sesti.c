#include <stdio.h>
#define MAXCLAN 15

void fibonacci15(void) {
   int fibonacci[MAXCLAN] = {[0] = 1, [1] = 1};
   int i;
   for (i = 2; i < 15; i++) {
      fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
   }
   printf("%d", fibonacci[0]);
   for (i = 1; i < 15; i++) {
      printf(", %d", fibonacci[i]);
   }
}

int main() {
   fibonacci15();
   return 0;
}