#pragma once
#ifndef STACK_CLASS
#define STACK_CLASS

#include <iostream>
#include <cstdlib>

using namespace std;

const int MaxStackSize = 50;	// 栈的大小，即栈中元素的最大个数

template <class T>
class Stack
{
public:
	Stack(void);				// 初始化栈
	~Stack(void);

	void Push(const T& item);	// 压入元素
	T Pop(void);				// 弹出元素
	void ClearStack(void);		// 清空栈
	T Peek(void) const;			// 访问栈顶元素

	int StackEmpty(void)const;	// 栈满？
	int StackFull(void)const;	//	栈空？

private:
	T stackList[MaxStackSize];
	int top;
};

template <class T>
Stack<T>::Stack(void) :top(-1)
{
}

template <class T>
Stack<T>::~Stack(void)
{
}
template<class T>
inline void Stack<T>::Push(const T& item)
{
	if (top == MaxStackSize - 1)
	{
		cerr << "Stack overflow!" << endl;
		exit(1);
	}
	top++;
	stackList[top] = item;
}
template<class T>
inline T Stack<T>::Pop(void)
{
	T temp;
	if (top == -1)
	{
		cerr << "Attempt to pop an empty stack!" << endl;
		exit(1);
	}
	temp = stackList[top];
	top--;
	return temp;
}
template<class T>
inline void Stack<T>::ClearStack(void)
{
	top = -1;
}
template<class T>
inline T Stack<T>::Peek(void) const
{
	if (top == -1)
	{
		cerr << "Attempt to peek at an empty stack!" << endl;
		exit(1);
	}
	return stackList[top];
}
template<class T>
inline int Stack<T>::StackEmpty(void) const
{
	return top == -1;
}
template<class T>
inline int Stack<T>::StackFull(void) const
{
	return top == MaxStackSize - 1;
}
#endif // !STACK_CLASS
