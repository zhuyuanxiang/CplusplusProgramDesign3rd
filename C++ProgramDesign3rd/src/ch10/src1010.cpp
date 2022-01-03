#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class even_by_two {
public:
	int operator() () const { return _x += 2; }
private:
	static int _x;
};

int even_by_two::_x = 0;

void src1010()
{
	// P353，以可变序列算法对数据序列进行操作
	cout << "--->" << "代码10-10（以可变序列算法对数据序列进行操作）" << "<---" << endl;

	int i_array[] = { 0,1,2,3,4,5,6,6,6,7,8 };
	int i_array_1[] = { 0,1,2,3,4,4,5,5,6,6,6,6,7,8 };

	vector<int> i_vector(i_array, i_array + sizeof(i_array) / sizeof(int));
	vector<int>i_vector_1(i_array + 6, i_array + 8);
	vector<int>i_vector_2(i_array_1, i_array_1 + sizeof(i_array_1) / sizeof(int));
	ostream_iterator<int>output(cout, " ");

	cout << "原始的i_vector_1：";
	copy(i_vector_1.begin(), i_vector_1.end(), output);
	cout << endl;
	cout << "遍历i_vector_1，对每个元素执行even_by_two操作：";
	generate(i_vector_1.begin(), i_vector_1.end(), even_by_two());
	copy(i_vector_1.begin(), i_vector_1.end(), output);
	cout << endl;

	cout << "原始的i_vector：";
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;
	cout << "遍历i_vector,对每个元素执行even_by_two操作：";
	generate(i_vector.begin(), i_vector.end(), even_by_two());
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "删除现在i_vector中的元素26（ToDo：为什么删除不掉已经存在的元素？）：";
	remove(i_vector.begin(), i_vector.end(), 26);
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	// 删除不存在的元素，不会报错
	cout << "再次删除现在i_vector中的元素26：";
	remove(i_vector.begin(), i_vector.end(), 26);
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "删除元素8，将结果存入另一个序列（原序列未变）：" << endl;
	vector<int>i_vector_3(12);
	remove_copy(i_vector.begin(), i_vector.end(), i_vector_3.begin(), 8);
	cout << "现在的i_vector：";
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;
	cout << "现在的i_vector_3：";
	copy(i_vector_3.begin(), i_vector_3.end(), output);
	cout << endl;

	cout << "删除小于16的元素：";
	remove_if(i_vector.begin(), i_vector.end(), bind2nd(less<int>(), 16));
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "-->新创建的i_vector：";
	i_vector = vector<int>(i_array, i_array + sizeof(i_array) / sizeof(int));
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "删除小于6的元素，将结果存入另一个序列（原序列未变）：" << endl;
	remove_copy_if(i_vector.begin(), i_vector.end(), i_vector_3.begin(), bind2nd(less<int>(), 6));
	cout << "现在的i_vector：";
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;
	cout << "现在的i_vector_3：";
	copy(i_vector_3.begin(), i_vector_3.end(), output);
	cout << endl;

	cout << "将所有的元素6改为3：";
	replace(i_vector.begin(), i_vector.end(), 6, 3);
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "将所有的元素3改为5，将结果存入另一个序列（原序列未变）：";
	replace_copy(i_vector.begin(), i_vector.end(), i_vector_3.begin(), 3, 5);
	copy(i_vector_3.begin(), i_vector_3.end(), output);
	cout << endl;

	cout << "将所有小于5的元素改为2：";
	replace_if(i_vector.begin(), i_vector.end(), bind2nd(less<int>(), 5), 2);
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "将所有的元素8改为9，将结果存入另一个序列（原序列未变）：";
	replace_copy_if(i_vector.begin(), i_vector.end(), i_vector_3.begin(), bind2nd(equal_to<int>(), 8), 9);
	copy(i_vector_3.begin(), i_vector_3.end(), output);
	cout << endl;

	cout << "-->新创建的i_vector：";
	i_vector = vector<int>(i_array, i_array + sizeof(i_array) / sizeof(int));
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "逆向重排每一个元素：";
	reverse(i_vector.begin(), i_vector.end());
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "逆向重排每一个元素，将结果存入另一个序列（原序列未变）：";
	reverse_copy(i_vector.begin(), i_vector.end(), i_vector_3.begin());
	copy(i_vector_3.begin(), i_vector_3.end(), output);
	cout << endl;

	cout << "旋转（互换）元素：";
	rotate(i_vector.begin(), i_vector.end() - 4, i_vector.end());
	copy(i_vector.begin(), i_vector.end(), output);
	cout << endl;

	cout << "旋转（互换）元素，将结果存入另一个序列（原序列未变）：";
	rotate_copy(i_vector.begin(), i_vector.end() - 4, i_vector.end(), i_vector_3.begin());
	copy(i_vector_3.begin(), i_vector_3.end(), output);
	cout << endl;
}
