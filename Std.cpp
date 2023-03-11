#include"Std.h"
#include<cmath>

Std::Std() : m_std{ 0 }, i{ 0 } {};

void Std::update(double next) {
	m_std = pow(next, 2) + m_std;
	i++;
}

double Std::eval() const {
	return m_std / i;
}


const char* Std::name() const {
	return "std";
};