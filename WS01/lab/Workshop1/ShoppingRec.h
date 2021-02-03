/*Joshua Rosen
jrosen5@myseneca.ca
141652180
01-19-21*/
#ifndef SDDS_SHOPPINGREC_H__
#define SDDS_SHOPPINGREC_H__

const int MAX_TITLE_LENGTH = 50;
const int MAX_QUANTITY_VALUE = 50;

namespace sdds {
	struct ShoppingRec {
		char m_title[MAX_TITLE_LENGTH + 1];
		int m_quantity;
		bool m_bought;
	};

	ShoppingRec getShoppingRec();
	void displayShoppingRec(const ShoppingRec* shp);
	void toggleBoughtFlag(ShoppingRec* rec);
	bool isShoppingRecEmpty(const ShoppingRec* shp);

}
#endif
