/*Joshua Rosen
jrosen5@myseneca.ca
141652180
01-19-21*/
#ifndef   SDDS_FILE_H
#define   SDDS_FILE_H

#include <iostream>
#include "ShoppingRec.h"

namespace sdds {
	bool openFileForRead();
	bool openFileForOverwrite();
	void closeFile();
	bool freadShoppingRec(ShoppingRec* rec);
	void fwriteShoppintRec(const ShoppingRec* rec);
}
#endif
