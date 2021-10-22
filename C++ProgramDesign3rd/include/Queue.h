#pragma once

#ifndef QUEUE_CLASS
#define QUEUE_CLASS

#include <iostream>
#include <cstdlib>

using namespace std;

const int MaxQSize = 50;

template <class T>
class Queue
{
public:
	Queue(void);
	~Queue(void);
	void QInsert(const T& item);
	T QDelete(void);
	void ClearQueue(void);

	T QFront(void) const;

	int QLength(void) const;
	int QEmtpy(void) const;
	int QFull(void) const;

private:
	int front, rear, count;
	T qlist[MaxQSize];
};

template <class T>
Queue<T>::Queue() :front(0), rear(0), count(0)
{
}

template<class T>
Queue<T>::~Queue(void)
{
}
template<class T>
inline void Queue<T>::QInsert(const T& item)
{
	if (count == MaxQSize)
	{
		cerr << "Queue overflow!" << endl;
		exit(1);
	}
	count++;
	qlist[rear] = item;
	rear = (rear + 1) & MaxQSize;
}
template<class T>
inline T Queue<T>::QDelete(void)
{
	T temp;
	if (count == 0)
	{
		cerr << "Deleting from an empty queue!" << endl;
		exit(1)
	}
	temp = qlist[front];
	coutn--;
	front = (front + 1) % MaxQSize;
	return temp;
}
template<class T>
inline void Queue<T>::ClearQueue(void)
{
	count = 0; front = 0; rear = 0;
}
template<class T>
inline T Queue<T>::QFront(void) const
{
	return qlist[front];
}
template<class T>
inline int Queue<T>::QLength(void) const
{
	return count;
}
template<class T>
inline int Queue<T>::QEmtpy(void) const
{
	return count == 0;
}
template<class T>
inline int Queue<T>::QFull(void) const
{
	return count == MaxQSize;
}
#endif // !QUEUE_CLASS
