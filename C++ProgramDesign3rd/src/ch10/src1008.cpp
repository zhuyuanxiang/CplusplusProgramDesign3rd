#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void src1008()
{
	// P349，用sort通用算法来排序向量容器中的元素
	cout << "--->" << "代码10-08（用sort通用算法来排序向量容器中的元素）" << "<---" << endl;

	int A[] = { 1,4,3,2,5 };
	const int N = sizeof(A) / sizeof(int);
	vector<int> col1(A, A + N);
	ostream_iterator<int>output(cout, " ");

	cout << "Vector col1 contains:";
	copy(col1.begin(), col1.end(), output);

	sort(col1.begin(), col1.end());
	cout << "\nAfter sorted in descending order, col1 contains:";
	copy(col1.begin(), col1.end(), output);
	cout << endl;
}
