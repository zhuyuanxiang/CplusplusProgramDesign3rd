#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

void src1003()
{
	// P339，列表容器示例：必定例9-7中的列表容器 list 
	cout << "--->" << "代码10-03（列表容器示例）" << "<---" << endl;

	list<int> Link;	// 构造一个列表，用于存放整数链表
	int key, item;
	for (int i = 0; i < 10; i++)
	{
		item = (i + 1) * (i + 1);
		Link.push_front(item);
	}
	cout << "List: ";
	list<int>::iterator p = Link.begin();
	while (p != Link.end())
	{
		cout << *(p++) << " ";
		//cout << *p << " ";
		//p++;
	}
	cout << endl;

	Link.remove(1);
	cout << "After remove 1." << endl;
	cout << "List: ";
	p = Link.begin();
	while (p != Link.end())
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;
}
