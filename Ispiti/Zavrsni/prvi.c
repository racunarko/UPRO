#include <stdio.h>

void odrediMjesecIDanUskrsa(int godina, int *mjesec, int *dan) {
   int X, Y;
   if (godina >= 1582 && godina <= 1699) {
      X = 22;
      Y = 2;
   } else if (godina >= 1700 && godina <= 1799) {
      X = 23;
      Y = 3;
   } else if (godina >= 1800 && godina <= 1899) {
      X = 23;
      Y = 4;
   } else if (godina >= 1900 && godina <= 2099) {
      X = 24;
      Y = 5;
   }
   int A = godina % 19;
   int B = godina % 4;
   int C = godina % 7;
   int D = (A * 19 + X) % 30;
   int E = (2 * B + 4 * C + 6 * D + Y) % 7;

   if ((22 + D + E) < 31) {
      *dan = 22 + D + E;
      *mjesec = 3;
   } else {
      *dan = D + E - 9;
      *mjesec = 4;
   }
   return;
}