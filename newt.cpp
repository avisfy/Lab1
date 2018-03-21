#include "Header.h"
#include <iostream> 

double newtons(double a, double b, int& k)
{
	double xn;
	double xn1;
	double diff;

	if (f(a)*f2(a) > 0)
	{
		xn1 = a;
	}
	else if (f(b)*f2(b) > 0)
	{
		xn1 = b;
	}
	else
	{
		std::cout << "error ";
		return 0;
	}

	do
	{
		k++;
		xn = xn1;
		diff = f(xn) / f1(xn);
		xn1 = xn - diff;

	} while (abs(diff) > EPS);
	return xn1;
}