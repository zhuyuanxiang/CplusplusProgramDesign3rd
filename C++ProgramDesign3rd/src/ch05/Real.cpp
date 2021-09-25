#include <iostream>
#include <Real.h>

using namespace std;

Real::Real(int r1, int r2)
{
	R1 = r1; R2 = r2;
}

void Real::print()
{
	cout << R1 << ":" << R2 << endl;
}

void Real::print() const
{
	cout << "const->" << R1 << ":" << R2 << endl;
}
