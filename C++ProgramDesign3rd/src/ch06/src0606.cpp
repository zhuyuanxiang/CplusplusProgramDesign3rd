#include <iostream>
#include <iomanip>

using namespace std;

void src0606() {
	// P172，void 类型指针的使用
	cout << "--->" << "代码06-06（void 类型指针的使用）" << "<---" << endl;

	//void v_object;	// 不能声明 void 类型的变量
	void* pv;			// 可以声明 void 类型的指针
	int* pint; int i;
	i = 10;
	pv = &i;			// void 类型指针指向整型变量（这种转换会导致原类型丢失）
	//cout << "pv=" << *pv << endl;	// void 型指针无法输出
	pint = (int*)pv;	// 类型强制转换（注意这种转换一定是在已知情况下操作，否则后果未知）
	cout << "pint=" << *pint << endl;
	i = 5;
	cout << "pint=" << *pint << endl;
}
