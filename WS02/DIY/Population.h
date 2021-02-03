#ifndef SDDS_POPULATION_H_
#define SDDS_POPULATION_H_

#define DATAFILE "PCpopulations.csv"
namespace sdds {

	struct Population
	{
		char pos[4];
		int pop;
	};
	void sort();
	bool load(const char file[]);
	bool load();
	void display(Population &population);
	void display();
	void deallocateMemory();

}
#endif // SDDS_POPULATION_H_