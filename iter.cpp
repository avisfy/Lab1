#include "Header.h"
#include <iostream> 

double simplyIteration(double a, double b, int &k)
{
	k = 0;
	double x0;
	double x1;
	//std::cout << "fa" << f(a) << " f2a" << f2(a);
	//std::cout << "fb" << f(b) << " f2b" << f2(b);
	if (f(a)*f2(a) > 0)
	{
		x1 = a;
	}
	else if (f(b)*f2(b) > 0)
	{
		x1 = b;
	}
	else
	{
		std::cout << "error ";
		return 0;
	}

	do {
		k++;
		x0 = x1;
		x1 = x(x0);
		//std::cout << std::endl << x1;

	} while (fabs(x1-x0)>EPS);
	return x1;
}