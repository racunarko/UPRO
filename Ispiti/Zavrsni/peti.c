#include <stdio.h>

struct podaci_s {
   char prezime[40 + 1];
   char ime[40 + 1];
   float primanja;

} struktura[10] = {{"Bara", "Ivan", 5.6}};

char *trazenoPrezime(struct podaci_s *pok, int n) { return (pok + n)->prezime; }
int main() {
   printf("%s", trazenoPrezime(&struktura[0], 0));
   return 0;
}