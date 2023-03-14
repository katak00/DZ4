#include <iostream>
#include <limits>
#include"variables.h"


int main()
{
	Min_statistics[0] = new Min{};
	Max_statistics[0] = new Max{};
	Mean_statistics[0] = new Mean{};
	Std_statistics[0] = new Std{};

	while (std::cin >> val)
	{
		for (size_t i = 0; i < statistics_count; ++i)
		{
			Min_statistics[i]->update(val);
			Max_statistics[i]->update(val);
			Mean_statistics[i]->update(val);
			Std_statistics[i]->update(val);
		}
	}
	// Handle invalid input data
	if (!std::cin.eof() && !std::cin.good()) {
		std::cerr << "Invalid input data\n";
		return 1;
	}

	// Print results if any
	for (size_t i = 0; i < statistics_count; ++i) {
		std::cout << Min_statistics[i]->name() << " = " << Min_statistics[i]->eval() << std::endl;
		std::cout << Max_statistics[i]->name() << " = " << Max_statistics[i]->eval() << std::endl;
		std::cout << Mean_statistics[i]->name() << " = " << Mean_statistics[i]->eval() << std::endl;
		std::cout << Std_statistics[i]->name() << " = " << Std_statistics[i]->eval() << std::endl;
	}

	
	for (size_t i = 0; i < statistics_count; ++i) {
		delete Min_statistics[i];
		delete Max_statistics[i];
		delete Mean_statistics[i];
		delete Std_statistics[i];
	}


	return 0;
}