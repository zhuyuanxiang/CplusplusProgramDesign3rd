#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void src1006()
{
	// P344，应用逆向迭代器和后插入迭代器来操作向量容器中的元素
	cout << "--->" << "代码10-06（迭代器操作容器示例）" << "<---" << endl;

	int A[] = { 1, 2, 3, 4, 5 };
	const int N = sizeof(A) / sizeof(int);
	vector<int> col1(A, A + N);
	ostream_iterator<int> output(cout, " ");

	cout << "List col1 contains:";
	copy(col1.begin(), col1.end(), output);	// 输出向量容器 col1 中的元素

	vector<int>::iterator pos = col1.begin(); // 定义指向容器 col1 中第一个元素的迭代器
	cout << "\nThe first element is:" << *pos;

	vector<int>::reverse_iterator rpos = col1.rbegin();	// 定义指向容器 col1 中最后一个元素的逆向迭代器
	cout << "\nThe last element is:" << *rpos << endl;

	back_insert_iterator<vector<int>> iter(col1);	// 后插入迭代器的声明与使用
	*iter = 66;

	back_inserter(col1) = 88;	// 后插入函数的使用

	copy(col1.begin(), col1.end(), output);

	cout << endl;
}
