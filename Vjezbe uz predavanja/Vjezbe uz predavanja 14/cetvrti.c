#include <stdio.h>

_Bool jestVelikoSlovo(char ulaz) {
   _Bool logic_Value;
   logic_Value = ulaz >= 'A' && ulaz <= 'Z';
   return logic_Value;
}

int main() {
   char znak;
   _Bool veliko_Slovo;
   printf("Upisite znak > ");
   scanf("%c", &znak);
   veliko_Slovo = jestVelikoSlovo(znak);
   if (veliko_Slovo) {
      printf("Jest veliko slovo");
   } else {
      printf("Nije veliko slovo");
   }
   return 0;
}