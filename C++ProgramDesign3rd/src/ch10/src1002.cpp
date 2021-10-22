#include <iostream>
#include <iomanip>
#include <deque>
#include <algorithm>

using namespace std;

void src1002()
{
	// P338，双端队列示例：保存双数度数值序列
	cout << "--->" << "代码10-02（双端队列示例）" << "<---" << endl;

	deque <double> values;
	ostream_iterator<double> output(cout, " ");
	values.push_front(2.2);
	values.push_front(3.5);
	values.push_back(1.1);
	cout << "values contains: ";
	for (int i = 0; i < values.size(); ++i)
		cout << i << ")" << values[i] << ", ";
	values.pop_front();
	cout << "\n" << "After pop_front values contains: ";
	copy(values.begin(), values.end(), output);
	values[1] = 5.4;
	cout << "\n" << "After values[1]=5.4 values contains: ";
	copy(values.begin(), values.end(), output);
	cout << endl;

	deque<int> i_values;
	ostream_iterator<int> i_output(cout, " ");
	i_values.push_back(1);
	i_values.push_back(2);
	i_values.push_back(3);
	cout << "values contains: ";
	for (int i = 0; i < i_values.size(); i++)
		cout << i << ")" << i_values[i] << ", ";
	i_values.pop_front();
	cout << "\n" << "After pop_front values contains: ";
	copy(i_values.begin(), i_values.end(), i_output);
	i_values[1] = 4;
	cout << "\n" << "After i_values[1]=4 values contains: ";
	copy(i_values.begin(), i_values.end(), i_output);
	cout << endl;
}
