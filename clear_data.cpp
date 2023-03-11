#include <iostream>
#include <limits>
#include "variables.h"


int clear_data()
{
	// Clear memory - delete all objects created by new
	for (size_t i = 0; i < statistics_count; ++i) {
		delete Min_statistics[i];
		delete Max_statistics[i];
		delete Mean_statistics[i];
		delete Std_statistics[i];
	}

	return 0;
}