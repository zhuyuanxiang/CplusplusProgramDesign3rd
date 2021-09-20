#include <iostream>
#include <iomanip>

using namespace std;

int get_volumne(int length, int width = 2, int height = 3);

void src03_15()
{
	// P81，带默认值的形参
	cout << "--->" << "代码3-15（带默认值的形参）：" << "<---" << endl;
	int x(10), y(12), z(15);
	cout << "Some box data get_volumne(x, y, z) is " << get_volumne(x, y, z) << endl;
	cout << "Some box data get_volumne(x, y) is " << get_volumne(x, y) << endl;
	cout << "Some box data get_volumne(x) is " << get_volumne(x) << endl;
	cout << "Some box data get_volumne(x, 7) is " << get_volumne(x, 7) << endl;
	cout << "Some box data get_volumne(5, 5, 5) is " << get_volumne(5, 5, 5) << endl;
}

int get_volumne(int length, int width, int height) {
	cout << "x=" << setw(5) << length << "; y=" << setw(5) << width << "; z=" << setw(5) << height << ' ';
	return length * width * height;
}
