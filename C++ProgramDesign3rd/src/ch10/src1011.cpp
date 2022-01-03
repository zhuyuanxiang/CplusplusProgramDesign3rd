#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void src1011()
{
	// P357，应用排序相关算法对序列进行各项操作
	cout << "--->" << "代码10-11（应用排序相关算法对序列进行各项操作）" << "<---" << endl;

	int i_array[] = { 26,17,15,22,23,33,32,40 };
	vector<int> i_vector(i_array, i_array + sizeof(i_array) / sizeof(int));
	ostream_iterator<int>output(cout, " ");

	cout << "-->原始序列为：";
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "-->查找并输出\t";
	cout << "最大元素=" << *max_element(i_vector.begin(), i_vector.end()) << "\t";
	cout << "最小元素=" << *min_element(i_vector.begin(), i_vector.end()) << endl;

	cout << "-->将i_vector.begin()+4-i_vector.begin()之间的各元素排序，"
		<< "结果放进[i_vector.begin(),i_vector.end()+4]区间内，"
		<< "剩余元素不保证维持原来的相对次序！" << endl;
	partial_sort(i_vector.begin(), i_vector.begin() + 3, i_vector.end());
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "-->局部排序，并且复制到别处：";
	vector<int>i_vector_1(5);
	partial_sort_copy(i_vector.begin(), i_vector.end(), i_vector_1.begin(), i_vector_1.end());
	copy(i_vector_1.begin(), i_vector_1.end(), output);
	cout << endl;

	cout << "-->默认递增排序：";
	sort(i_vector.begin(), i_vector.end());
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "-->将指定元素插入到区间内，使用两种函数给出的都是相同的位置：" << endl;;
	cout << *lower_bound(i_vector.begin(), i_vector.end(), 24) << endl;
	cout << *upper_bound(i_vector.begin(), i_vector.end(), 24) << endl;

	cout << "-->对于有序区间，可以用二分查找方法寻找某个元素：" << endl;
	cout << "存在这个元素：" << binary_search(i_vector.begin(), i_vector.end(), 33) << endl;
	cout << "没有这个元素：" << binary_search(i_vector.begin(), i_vector.end(), 34) << endl;

	cout << "-->按照字典顺序，将序列变换为上一个排列组合：";
	prev_permutation(i_vector.begin(), i_vector.end());
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "-->按照字典顺序，将序列变换为下一个排列组合：";
	next_permutation(i_vector.begin(), i_vector.end());
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "-->合并两个序列，结果放入第三个序列：";
	vector<int> i_vector_2(13);
	merge(i_vector.begin(), i_vector.end(), i_vector_1.begin(), i_vector_1.end(), i_vector_2.begin());
	copy(i_vector_2.begin(), i_vector_2.end(), output);
	cout << endl;

	cout << "-->并集两个序列，结果放入第三个序列：";
	vector<int> i_vector_3(13);
	set_union(i_vector.begin(), i_vector.end(), i_vector_1.begin(), i_vector_1.end(), i_vector_3.begin());
	copy(i_vector_3.begin(), i_vector_3.end(), output);
	cout << endl;

	cout << "-->交集两个序列，结果放入第三个序列：";
	set_intersection(i_vector.begin(), i_vector.end(), i_vector_1.begin(), i_vector_1.end(), i_vector_3.begin());
	copy(i_vector_3.begin(), i_vector_3.end(), output);
	cout << endl;

	cout << "-->差集两个序列，结果放入第三个序列：";
	set_difference(i_vector.begin(), i_vector.end(), i_vector_1.begin(), i_vector_1.end(), i_vector_3.begin());
	copy(i_vector_3.begin(), i_vector_3.end(), output);
	cout << endl;

	cout << "-->将小于*(i_vector_3.begin()+5)的元素放置在该元素之左，其余放置其右。"
		<< "不保证维持原有的相对位置" << endl;
	nth_element(i_vector_3.begin(), i_vector_3.begin() + 7, i_vector_3.end());
	copy(i_vector_3.begin(), i_vector_3.end(), output);
	cout << endl;

	cout << "排序，并保持等值元素的相对次序：" << endl << "排序前：";
	copy(i_vector_2.begin(), i_vector_2.end(), output);
	stable_sort(i_vector_2.begin(), i_vector_2.end());
	cout << endl << "排序后";
	copy(i_vector_2.begin(), i_vector_2.end(), output);
	cout << endl;

	cout << "例子不好，不再做了";
}
