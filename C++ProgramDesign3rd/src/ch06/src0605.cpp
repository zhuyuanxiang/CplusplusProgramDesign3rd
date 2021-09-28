#include <iostream>
#include <iomanip>

using namespace std;

void src0605() {
	// P159，指针的声明、赋值与使用
	cout << "--->" << "代码06-05（指针的声明、赋值与使用）" << "<---" << endl;

	int* i_pointer;
	int i;

	i_pointer = &i;
	i = 10;
	cout << "Output int i= " << i << endl;
	cout << "Output int pointer i= " << *i_pointer << endl;

	const char* name1 = "zYx.Tom";
	char s[] = "abc";
	char t[] = "tom";
	cout << "name= " << *name1 << endl;
	name1 = s;
	cout << "name= " << *name1 << endl;

	char* const name2 = s;
	//name2 = t;	// 指针常量，不可修改
}
