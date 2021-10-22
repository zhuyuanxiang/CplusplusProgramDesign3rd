#pragma once

#ifndef NODE_CLASS
#define NODE_CLASS

#ifndef NULL
const int NULL = 0;
#endif // !NULL

template<class T>
class Node
{
public:
	Node();
	~Node();

	T data;

	Node(const T& item, Node<T>* ptrnext = NULL);
	void InsertAfter(Node<T>* p);
	Node<T>* DeleteAfter(void);
	Node<T> NextNode(void)  const;

private:
	Node<T>* next;
};

template<class T>
Node<T>::Node()
{
}

template<class T>
Node<T>::~Node()
{
}

template<class T>
inline Node<T>::Node(const T& item, Node<T>* ptrnext) :data(item), next(ptrnext)
{

}

template<class T>
inline void Node<T>::InsertAfter(Node<T>* p)
{
	return next;
}

template<class T>
inline Node<T>* Node<T>::DeleteAfter(void)
{
	Node<T>* tempPtr = next;
	if (next == NULL)
		return NULL;
	next = tempPtr->next;
	return tempPtr;
}

template<class T>
inline Node<T> Node<T>::NextNode(void) const
{
	return next;
}

#endif // !NODE_CLASS
