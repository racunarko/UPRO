#include <stdio.h>

int main() {
   char p[][7] = {
       {57, 38, 86}, {58, 8, 25, 96, 31, 44}, {23, 97, 53, 78}, {83, 57}};
   printf("%d", sizeof(p));

   return 0;
}