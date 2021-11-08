#include <iostream>
#include <queue>

using namespace std;

template<class T>
void popElements(T& s);

void src1005()
{
	// P341，应用标准库中的 deque 顺序容器生成一个整数标准队列 Queue
	cout << "--->" << "代码10-05（标准队列容器示例）" << "<---" << endl;

	queue<int> intDequeQueue;
	for (int i = 0; i < 10; i++)
		intDequeQueue.push(i);
	cout << "Popping from intDequeQueue: ";
	popElements(intDequeQueue);
	cout << endl;
}

template<class T>
void popElements(T& s)
{
	while (!s.empty()) {
		cout << s.front() << ' ';
		s.pop();
	}
}
