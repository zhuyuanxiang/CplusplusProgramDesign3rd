#include <iostream>
#include <iomanip>

using namespace std;

void src0607() {
	// P174，用三种方法输出数组各个元素
	cout << "--->" << "代码06-07（用三种方法输出数组各个元素）" << "<---" << endl;

	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };

	cout << "使用数组名和下标显示数组" << endl;
	cout << "a[i]=\t";
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;

	cout << "使用数组名和指针运算显示数组" << endl;
	cout << "*(a+i)=\t";
	for (int i = 0; i < 10; i++)
		cout << *(a + i) << " ";
	cout << endl;

	cout << "使用指针变量显示数组" << endl;
	cout << "int* p=\t";
	for (int* p = a; p < (a + 10); p++)
		cout << *p << " ";
	cout << endl;
}
