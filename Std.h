#pragma once
#include"IStatistics.h"
class Std : public IStatistics {
public:
	Std();

	void update(double next) override;

	double eval() const override;

	const char* name() const override;

private:
	double m_std;
	int i;
};