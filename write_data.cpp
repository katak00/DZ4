#include <iostream>
#include <limits>
#include "variables.h"

void write_data()
{
	// Print results if any
	for (size_t i = 0; i < statistics_count; ++i) {
		std::cout << Min_statistics[i]->name() << " = " << Min_statistics[i]->eval() << std::endl;
		std::cout << Max_statistics[i]->name() << " = " << Max_statistics[i]->eval() << std::endl;
		std::cout << Mean_statistics[i]->name() << " = " << Mean_statistics[i]->eval() << std::endl;
		std::cout << Std_statistics[i]->name() << " = " << Std_statistics[i]->eval() << std::endl;
	}
}