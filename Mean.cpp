#include"Mean.h"
#include<cmath>

Mean::Mean() : m_mean{ 0 }, i{ 0 } {};

void Mean::update(double next) {
	m_mean = next + m_mean;
	i++;
}

double Mean::eval() const {
	return m_mean / i;
}


const char* Mean::name() const {
	return "mean";
};