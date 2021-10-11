#include <iostream>
#include "complex.h"

using namespace std;

complex::complex(double r, double i)
{
	real = r; imag = i;
}

//complex complex::operator+(complex c2)
//{
//	return complex(real + c2.real, imag + c2.imag);
//}
//
//complex complex::operator-(complex c2)
//{
//	return complex(real - c2.real, imag - c2.imag);
//}

void complex::display()
{
	cout << "(" << real << "," << imag << ")" << endl;
}

complex operator+(complex c1, complex c2)
{
	return complex(c1.real + c2.real, c1.imag + c2.imag);
}

complex operator-(complex c1, complex c2)
{
	return complex(c1.real - c2.real, c1.imag - c2.imag);
}
