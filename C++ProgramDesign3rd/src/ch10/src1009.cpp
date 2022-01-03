#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void src1009()
{
	// P350，应用不可变序列算法对数据序列进行分析
	cout << "--->" << "代码10-09（应用不可变序列算法对数据序列进行分析）" << "<---" << endl;

	int i_array[] = { 0,1,2,3,3,4,5,6,5,6,5,6,6,6,7,9 };
	vector<int>i_vector(i_array, i_array + sizeof(i_array) / sizeof(int));
	ostream_iterator<int>output(cout, " ");
	cout << "i_vector contains:" << endl;
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	int i_array_1[] = { 6,6 };
	vector<int>i_vector_1(i_array_1, i_array_1 + sizeof(i_array_1) / sizeof(int));
	int i_array_2[] = { 5,6, };
	vector<int>i_vector_2(i_array_2, i_array_2 + sizeof(i_array_2) / sizeof(int));
	int i_array_3[] = { 0,1,2,3,4,5,7,7,7,9,7 };
	vector<int>i_vector_3(i_array_3, i_array_3 + sizeof(i_array_3) / sizeof(int));

	cout << "找出i_vector中相邻元素相等的第一个元素：";
	cout << *adjacent_find(i_vector.begin(), i_vector.end()) << endl;

	cout << "找出i_vector中元素值为6的元素个数：";
	cout << count(i_vector.begin(), i_vector.end(), 6) << endl;

	cout << "找出i_vector中小于7的元素个数：";
	cout << count_if(i_vector.begin(), i_vector.end(), bind2nd(less<int>(), 7)) << endl;

	cout << "找出i_vector中元素值为4的第一个元素所在位置的元素：";
	cout << *find(i_vector.begin(), i_vector.end(), 4) << endl;

	cout << "找出i_vector中元素值为4的第一个元素所在位置前移2位的元素：";
	cout << *(find(i_vector.begin(), i_vector.end(), 4) - 2) << endl;

	cout << "找出i_vector中元素值大于2的第一个元素所在位置的元素：";
	cout << *find_if(i_vector.begin(), i_vector.end(), bind2nd(greater<int>(), 2)) << endl;

	cout << "找出i_vector中子序列i_vector_2第一次出现的第一个位置的元素：";
	cout << *(find_first_of(i_vector.begin(), i_vector.end(), i_vector_2.begin(), i_vector_2.end())) << endl;

	cout << "找出i_vector中子序列i_vector_2最后一次出现的位置的元素：";
	cout << *(find_end(i_vector.begin(), i_vector.end(), i_vector_2.begin(), i_vector_2.end())) << endl;

	cout << "找出i_vector中子序列i_vector_2出现的起点位置元素：";
	cout << *search(i_vector.begin(), i_vector.end(), i_vector_2.begin(), i_vector_2.end()) << endl;

	cout << "找出i_vector中3个6的起点位置元素：";
	cout << *search_n(i_vector.begin(), i_vector.end(), 3, 6, equal_to<int>()) << endl;

	cout << "判断两个序列的区间是否相等：";
	cout << equal(i_vector.begin(), i_vector.end(), i_vector_2.begin()) << endl;

	cout << "查找两个序列中不匹配的点的位置：";
	pair<vector<int>::iterator, vector<int>::iterator> result = mismatch(i_vector.begin(), i_vector.end(), i_vector_3.begin());
	cout << result.first - i_vector.begin() << endl;
}
