/*Joshua Rosen
jrosen5@myseneca.ca
141652180
01-27-21*/

#ifndef SDDS_FILE_H_
#define SDDS_FILE_H_
namespace sdds {
   bool openFile(const char filename[]);
   void closeFile();
   int noOfRecords();
   // TODO: Declare read prototypes
   bool read(char name[]);
   bool read(int& number);
   bool read(double& salary);
}
#endif // !SDDS_FILE_H_
