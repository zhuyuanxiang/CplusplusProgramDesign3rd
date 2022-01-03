#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void src1007()
{
	// P346，用三个迭代器辅助函数来操作列表容器中的元素
	cout << "--->" << "代码10-07（用三个迭代器辅助函数来操作列表容器中的元素）" << "<---" << endl;

	int A[] = { 1,2,3,4,5 };
	const int N = sizeof(A) / sizeof(int);
	list<int> col1(A, A + N);
	ostream_iterator<int>output(cout, " ");

	cout << "List col1 contains:";
	copy(col1.begin(), col1.end(), output);

	list<int>::iterator pos = col1.begin();
	cout << "\nThe first element is:" << *pos;

	advance(pos, 3);
	cout << "\nThe 4th element is:" << *pos;

	cout << "\nThe advanced distance is:" << distance(col1.begin(), pos);

	iter_swap(col1.begin(), --col1.end());
	cout << "\nAfter exchange List col1 contains:";
	copy(col1.begin(), col1.end(), output);
	cout << endl;
}
