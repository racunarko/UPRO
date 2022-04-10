#include <stdio.h>

struct record {
   int code;
   int salary;
   char name[40 + 1];
};

void increaseLowest(char *fileName, int percentage) {
   FILE *tok = fopen(fileName, "r+b");
   int min, prviProlaz = 1;
   struct record zapis;
   while (fread(&zapis, sizeof(zapis), 1, tok) == 1) {
      if (prviProlaz == 1) {
         min = zapis.salary;
         prviProlaz = 0;
      }
      if (zapis.salary < min) {
         min = zapis.salary;
      }
   }
   fseek(tok, 0L, SEEK_SET);
   while (fread(&zapis, sizeof(zapis), 1, tok) == 1) {
      if (zapis.salary == min) {
         zapis.salary = ((float)percentage / 100 + 1.) * zapis.salary;
         fseek(tok, -1L * sizeof(zapis), SEEK_CUR);
         fwrite(&zapis, sizeof(zapis), 1, tok);
      }
   }
   fclose(tok);
   return;
}
