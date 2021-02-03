#ifndef SDDS_FILE_H_
#define SDDS_FILE_H_
namespace sdds {
	bool openFile(const char filename[]);
	void closeFile();
	int noOfRecords();

	bool read(char pos[]);
	bool read(int &pop);
}
#endif // !SDDS_FILE_H_
