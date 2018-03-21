#include "Header.h"
#include <iostream> 

enum FORM_TYPE{TYPE_A = 0, TYPE_B = 1};

double chords(double a, double b, int& k)
{
	double xn;
	double xn1;
	double diff;
	int form;

	if (f(a)*f2(a) > 0)
	{
		xn1 = a;
		form = TYPE_A;
	}
	else if (f(b)*f2(b) > 0)
	{
		xn1 = b;
		form = TYPE_B;
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
		if (form)
		{
			diff = f(xn)*(b - xn) / (f(b) - f(xn));
		}
		else
		{
			diff = f(xn)*(xn-a) / (f(xn)-f(a));
		}
		diff = f(xn) / f1(xn);
		xn1 = xn - diff;

	} while (abs(diff) > EPS);
	return xn1;
}