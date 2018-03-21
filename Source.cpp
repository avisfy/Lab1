#include <iostream>
  
double half(double a, double b, int &k);
double simplyIteration(double a, double b, int &k);
double newtons(double a, double b, int& k);
double chords(double a, double b, int& k);

int main()
{
	int k = 0;
	//[-1; -0.5]
	double a1 = -1;
	double b1 = -0.5;
	//[0.7; 0.8]
	double a2 = 0.7;
	double b2 = 0.8;
	//[1.6;2]
	double a3 = 1.9;
	double b3 = 2.1;

	std::cout << std::fixed;
	std::cout.precision(4);
	std::cout << "\tPolovinnoe delenie:\n";
	double x = half(a1, b1, k);
	std::cout << "[" << a1 << ";" << b1 << "]: x = " << x << ", k = " << k << std::endl;
	x = half(a2, b2, k);
	std::cout << "[" << a2 << ";" << b2 << "]: x = " << x << ", k = " << k << std::endl;
	x = half(a3, b3, k);
	std::cout << "[" << a3 << ";" << b3 << "]: x = " << x << ", k = " << k << std::endl << std::endl;

	std::cout << "\tNewton:\n";
	x = newtons(a1, b1, k);
	std::cout << "[" << a1 << ";" << b1 << "]: x = " << x << ", k = " << k <<std::endl;
	x = newtons(a2, b2, k);
	std::cout << "[" << a2 << ";" << b2 << "]: x = " << x << ", k = " << k << std::endl;
	x = newtons(a3, b3, k);
	std::cout << "[" << a3 << ";" << b3 << "]: x = " << x << ", k = " << k << std::endl << std::endl;

	std::cout << "\tChords:\n";
	x = chords(a1, b1, k);
	std::cout << "[" << a1 << ";" << b1 << "]: x = " << x << ", k = " << k << std::endl;
	x = chords(a2, b2, k);
	std::cout << "[" << a2 << ";" << b2 << "]: x = " << x << ", k = " << k << std::endl;
	x = chords(a3, b3, k);
	std::cout << "[" << a3 << ";" << b3 << "]: x = " << x << ", k = " << k << std::endl << std::endl;

	std::cout << "\tprostoy iteracii\n";
	x = simplyIteration(a1, b1, k);
	std::cout << "[" << a1 << ";" << b1 << "]: x = " << x << ", k = " << k << std::endl;
	x = simplyIteration(a2, b2, k);
	std::cout << "[" << a2 << ";" << b2 << "]: x = " << x << ", k = " << k << std::endl;
	x = simplyIteration(a3, b3, k);
	std::cout << "[" << a3 << ";" << b3 << "]: x = " << x << ", k = " << k << std::endl << std::endl;
	system("pause");
	return 0;
}