#include <iostream>

#include "Population.h"
#include "File.h"
using namespace std;
namespace sdds {

	int noCodes;
	Population* population;


	bool load(Population& population) {
		bool ok = false;
		if (read(population.pos) && read(population.pop)) {
			ok = true;
		}
		return ok;
		/*read(population.pos) && read(&population.pop);
		return true;*/
	}

	bool load(const char file[]) {
		bool ok = false;
		int i = 0;
		if (openFile(DATAFILE)) {
			noCodes = noOfRecords();
			population = new Population[noCodes];
			for (i = 0; i < noCodes; i++)
			{
				load(population[i]);
			}
			if (i != noCodes) {
				cout << "Error: incorrect number of records read; the data is possibly corrupted" << endl;
			}
			else {
				ok = true;
			}
			closeFile();
		}
		else {
			cout << "Could not open data file: " << DATAFILE << endl;
		}
		return ok;
	}
	void display(Population& population)
	{
		cout << population.pos << ": " << population.pop << endl;
	}

	void display()
	{
		int i;
		sort();
		cout << "Postal Code: population" << endl;
		cout << "-------------------------" << endl;
		for (i = 0; i < noCodes; i++)
		{
			cout << i + 1 << ": ";
			display(population[i]);
		}

	}
	void deallocateMemory(void)
	{
		delete[] population;
		population = nullptr;
	}
}