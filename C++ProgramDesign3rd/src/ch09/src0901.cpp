#include <iostream>

using namespace std;

template<class T>	// 声明函数模板

void outputArray(const T* P_array, const int count)	// 定义函数体
{
	for (int i = 0; i < count; i++)
		cout << P_array[i] << ", ";
	cout << endl;
}

void src0901()
{
	// P285，函数模板的实例
	cout << "--->" << "代码09-01（函数模板的实例）" << "<---" << endl;

	const int aCount = 8, bCount = 8, cCount = 20;
	int aArray[aCount] = { 1,2,3,4,5,6,7,8 };	// 定义 int 数组
	double bArray[bCount] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8 };	// 定义 double 数组
	char cArray[cCount] = "Welcome to see you!";	// 定义 char 数组

	cout << "a Array contains:" << endl;
	outputArray(aArray, aCount);

	cout << "b Array contains:" << endl;
	outputArray(bArray, bCount);

	cout << "c Array contains:" << endl;
	outputArray(cArray, cCount);

}
