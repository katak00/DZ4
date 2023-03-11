#pragma once
#include"Min.cpp"
#include"Max.cpp"
#include"Mean.cpp"
#include"Std.cpp"

double val = 0;
const size_t statistics_count = 1;
IStatistics* Min_statistics[statistics_count]{};
IStatistics* Max_statistics[statistics_count]{};
IStatistics* Mean_statistics[statistics_count]{};
IStatistics* Std_statistics[statistics_count]{};