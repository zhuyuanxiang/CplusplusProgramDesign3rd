#pragma once
#ifndef ARRAY_CLASS
#define ARRAY_CLASS

#include <iostream>
#include <cstdlib>

using namespace std;

#ifndef NULL
const int NULL = 0
#endif // !NULL

// 错误类型的集合，共有三种类型的错误：数组大小错误、内存分配错误、下标逾界
enum ErrorType { invalidArraySize, memoryAllocationError, indexOutOfRange };

// 错误信息的集合
string errorMsg[3] =
{
	"Invalid array size",
	"Memory allocation error",
	"Invalid index:"
};

// 数据类模板声明
template<class T>	// 声明函数模板

class Array
{
private:
	T* alist;	// T 类型指针，用于存放动态分配的数组内存首地址
	int size;	// 数组的大小
	void Error(ErrorType error, int badIndex = 0) const;	// 错误处理函数
public:
	Array(int _size = 50);		// 构造函数
	Array(const Array<T>& A);	// 拷贝构造函数
	~Array(void);				// 析构函数
	Array<T>& operator =(const Array<T>& rhs);	// 重载“=”，使数组对象可以整体赋值
	T& operator[](int n);		// 重载“[]”，使数组对象可以下标访问
	operator T* (void)const;	// 重载“*”，使数组对象可以指针访问
	int ListSize(void)const;	// 获取数组的大小
	void Resize(int _size);		// 修改数组的大小
};

template<class T>
void Array<T>::Error(ErrorType error, int badIndex) const
{
	cout << errorMsg[error];	// 根据错误类型，输出错误信息
	if (error == indexOutOfRange)
		cout << badIndex;		// 下标逾界错误，输出错误的下标
	cout << endl;
	exit(1);
}

template<class T>
Array<T>::Array(int _size)
{
	if (_size <= 0)				// 数组大小<=0 时，输出“数组大小错误”
		Error(invalidArraySize);
	size = _size;
	alist = new T[size];
	if (alist == NULL)			// 判断内存是否正确分配
		Error(memoryAllocationError);
}

template<class T>
Array<T>::Array(const Array<T>& A)
{
	int n = A.size; size = n;	// 获取数组大小
	alist = new T[n];			// 分配 T 类型的元素空间
	if (alist = NULL)
		Error(memoryAllocationError);
	T* srcptr = A.alist;		// 对象 A 的数组首地址
	T* destptr = alist;			// 当前对象的数组首地址
	while (n--)
		*destptr++ = *srcptr++;
}

template<class T>
Array<T>::~Array(void)
{
	delete[] alist;
}

// 重载“=”运算符，实现对象 rhs 给当前对象的赋值。
template<class T>
Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
	int n = rhs.size;
	if (size != n)				// 判断当前对象大小与 rhs 对象大小是否相同，相同就不需要再次分配内存
	{
		delete[] alist;
		alist = new T[n];
		if (alist == NULL)
			Error(memoryAllocationError);
		size = n;
	}
	T* destptr = alist;
	T* srcptr = rhs.alist;
	while (n--)
		*destptr++ = *srcptr++;
	return *this;
}

// 重载“[]”运算符，实现下标访问元素，并且能够越界检查
template<class T>
T& Array<T>::operator[](int n)
{
	if (n<0 || n>size - 1)
		Error(indexOutOfRange, n);
	return alist[n];
}

// 重载“*”运算符，实现指针访问元素，
template<class T>
Array<T>::operator T* (void) const
{
	return alist;
}

template<class T>
int Array<T>::ListSize(void) const
{
	return size;
}

template<class T>
void Array<T>::Resize(int _size)
{
	if (_size <= 0)
		Error(invalidArraySize);
	if (_size == size)
		return;
	T* newlist = new T[_size];
	if (newlist == NULL)
		Error(memoryAllocationError);
	int n = (_size <= size) ? _size : size;
	T* srcptr = alist;
	T* destptr = newlist;
	while (n--)
		*destptr++ = *srcptr++;
	delete[] alist;
	alist = newlist;
	size = _size;
}

#endif // !ARRAY_CLASS
