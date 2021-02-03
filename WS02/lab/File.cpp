/*Joshua Rosen
jrosen5@myseneca.ca
141652180
01-27-21*/
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "File.h"

namespace sdds {
   FILE* fptr;
   bool openFile(const char filename[]) {
      fptr = fopen(filename, "r");
      return fptr != NULL;
   }
   int noOfRecords() {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1) {
         noOfRecs += (ch == '\n');
      }
      rewind(fptr);
      return noOfRecs;
   }
   void closeFile() {
      if (fptr) fclose(fptr);
   }
   // TODO: read functions go here    
   bool read(char name[]) {
       return fscanf(fptr, "%[^\n]\n", name);
   }
   bool read(int& number) {
       return fscanf(fptr, "%d,", &number);
   }
   bool read(double& salary) {
       return fscanf(fptr, "%lf,", &salary);
   }
   
}