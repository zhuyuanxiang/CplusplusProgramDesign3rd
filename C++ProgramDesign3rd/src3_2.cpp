#include <iostream>
using namespace std;
double bin2dec(double x, int n);
void src3_2()
{
	cout << "--->" << "´úÂë3-2£º" << "<---" << endl;
	int i, value(0);
	char ch;

	cout << "Enter an 8 bit binary number: ";
	for (i = 7; i >= 0; i--)
	{
		cin >> ch;
		if (ch == '1')
			value += int(bin2dec(2, i));
	}
	cout << "Decimal value is " << value << endl;
}
double bin2dec(double x, int n)
{
	double val = 1.0;
	while (n--)
		val *= x;
	return(val);
}