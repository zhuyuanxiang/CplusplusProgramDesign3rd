#include <iostream>
#include <vector>
#include <numeric>
#include <functional>

using namespace std;

void src1012()
{
	// P360，应用数值通用算法对数据序列进行操作
	cout << "--->" << "代码10-12（应用数值通用算法对数据序列进行操作）" << "<---" << endl;

	int i_array[] = { 1,3,6,10,15 };
	vector<int> i_vector(i_array, i_array + sizeof(i_array) / sizeof(int));
	ostream_iterator<int>output(cout, " ");

	cout << "-->序列中所有元素求和："
		<< accumulate(i_vector.begin(), i_vector.end(), 0) << endl;

	cout << "-->累加两个序列对应元素的乘积，即序列的内积："
		<< inner_product(i_vector.begin(), i_vector.end(), i_vector.begin(), 10) << endl;

	cout << "-->序列中部分元素步进求和，保存在另一个序列中：";
	partial_sum(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "-->序列中相邻元素求差，保存在另一个序列中：";
	adjacent_difference(i_vector.begin(), i_vector.end(), output);
}
