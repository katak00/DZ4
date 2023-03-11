#include <iostream>
#include <limits>
#include "variables.h"
#include "read_data.cpp"
#include "write_data.cpp"
#include "clear_data.cpp"

int main()
{
	read_data();
	write_data();
	clear_data();
	return 0;
}