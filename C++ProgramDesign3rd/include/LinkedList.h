#pragma once
#ifndef LINKEDLIST_CLASS
#define LINKEDLIST_CLASS

#include <iostream>>
#include <cstdlib>

using namespace std;

#ifndef NULL
const int NULL = 0
#endif // !NULL

template <class T>
class LinkedList
{
public:
	LinkedList(void);
	LinkedList(const LinkedList<T>& L);
	~LinkedList(void);
	LinkedList<T>& operator=(const LinkedList<T>& L);

	int ListSize(void)const;
	int ListEmpty(void)const;

	void Reset(int pos = 0);
	void Next(void);
	int EndOfList(void)const;
	int CurrentPosition(void)const;

	void InsertFront(const T& item);
	void InsertRear(const T& item);
	void InsertAt(const T& item);
	void InsertAfter(const T& item);

	T DeleteFront(void);
	void DeleteAt(void);

	T& Data(void);

	void ClearList(void);

private:
	Node<T>* front, * rear;
	Node<T>* prevPtr, * currPtr;
	int size;
	int position;

	Node<T>* GetNode(const T& item, Node<T>* ptrNext = NULL);
	void FreeNode(Node<T>* p);
	void CopyList(const LinkedList<T>& L);

};

template <class T>
LinkedList<T>::LinkedList()
{
}
template <class T>
LinkedList<T>::~LinkedList()
{
}

// ToDo: 原书未提供足够的代码
#endif // !LINKEDLIST_CLASS
