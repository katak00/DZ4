#include <iostream>
#include <limits>
#include "variables.h"
int read_data()
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
	return 0;
}