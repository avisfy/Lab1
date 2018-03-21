#include "Header.h"

double half(double a, double b, int &k)
{
	double c;
	k = 0;
	while ((b - a) > EPS)
	{
		k++;
		c = (a + b) / 2;
		if ((f(a)*f(c)) < 0)
			b = c;
		else
			a = c;
	}
	return (a + b) / 2;

}
