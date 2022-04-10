#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double frnd(double a, double b) {
   return (double)rand() / RAND_MAX * (b - a) + a;
}

int main() {
   double min, max;
   int n;

   printf("Donja i gornja granica, broj trenutaka > ");
   scanf("%lf %lf %d", &min, &max, &n);

   int rows = (max - min) + 1;
   char graph[rows][n];
   int i, j;

   for (i = 0; i < rows; i++) {
      for (j = 0; j < n; j++) {
         graph[i][j] = ' ';
      }
   }
   double reference = (max + min) / 2;
   double voltage, oldVoltage;

   oldVoltage = reference;
   srand((unsigned int)time(NULL));

   for (j = 0; j < n; j++) {
      voltage = oldVoltage + frnd(-1., 1.);
      if (voltage > max) {
         voltage = max;
      }
      if (voltage < min) {
         voltage = min;
      }
      graph[(int)(voltage - min)][j] = '*';
      oldVoltage = voltage;
   }
   voltage = max;
   for (i = rows - 1; i >= 0; i--) {
      printf("%3.0f ", voltage);
      for (j = 0; j < n; j++) {
         printf("%c", graph[i][j]);
      }
      printf("\n");
      voltage--;
   }
   return 0;
}