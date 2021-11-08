#include <iostream>
#include <stack>

using namespace std;

template<class T>
void popElements(T& s);

void src1004()
{
	// P341，应用标准库中的 deque 顺序容器生成一个整数栈 stack
	cout << "--->" << "代码10-04（标准栈容器示例）" << "<---" << endl;

	stack<int> intDequeStack;
	for (int i = 0; i < 10; i++)
		intDequeStack.push(i);
	cout << "Popping from intDequeStack: ";
	popElements(intDequeStack);
	cout << endl;
}

template<class T>
void popElements(T& s)
{
	while (!s.empty()) {
		cout << s.top() << ' ';
		s.pop();
	}
}
