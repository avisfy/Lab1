#pragma once
#include <cmath>

const double EPS = 0.0001;


inline double f(double x)
{
	return pow(x, 3) - 2 * pow(x, 2) - 0.4 * x + 1;
}

inline double f1(double x)
{
	return 3 * pow(x, 2) - 4 * x - 0.4;
}

inline double f2(double x)
{
	return 6 * x - 4;
}

inline double x(double x)
{
	//return ((pow(x, 3) - 2 * pow(x, 2) + 1) / 0.4f);
	//return -1.0f/(pow(x, 2)-2*x-0.4);
	return pow((2 * x * x + 0.4 * x - 1), 1.0f / 3.0f);
	//return pow((pow(x, 3) - 0.4 *x +1)*0.5,0.5);
}


