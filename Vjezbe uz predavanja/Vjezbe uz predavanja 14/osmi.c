#include <stdio.h>

int kolikiJeInt(void) { return sizeof(int); }

int main() {
   printf("%d", kolikiJeInt());
   return 0;
}