#pragma once
#ifndef ARRAY_BASED_SORTING_FUNCTIONS
#define ARRAY_BASED_SORTING_FUNCTIONS

// 用直接插入排序法对数组 A 中的元素进行升序排序
template <class T>
void InsertionSort(T A[], int n)
{
	int i, j;
	T temp;

	for (i = 1; i < n; i++)
	{
		j = i;
		temp = A[i];
		while (j > 0 && temp < A[j - 1])
		{
			A[j] = A[j - 1];
			j--;
		}
		A[j] = temp;
	}
}

// 交换函数
template <class T>
void Swap(T& x, T& yy)
{
	T temp;

	temp = x; x = y; y = temp;
}

// 用选择法对数组 A 的 n 个元素进行排序
template <class T>
void SelectionSort(T A[], int n)
{
	int smallIndex;
	for (int i = 0; i < n - 1; i++)
	{
		smallIndex = i;
		for (int j = i + 1; j < n; j++)
			if (A[j] < A[smallIndex])
				smallIndex = j;
		Swap(A[i], A[smallIndex]);
	}
}

template <class T>
void BubbleSort(T A[], int n)
{
	int i, j;
	int lastExchangeIndex;
	i = n - 1;
	while (i > 0)
	{
		lastExchangeIndex = 0;
		for (int j = 0; j < i; j++)
			if (A[j + 1] < A[j])
			{
				Swap(A[j], A[j + 1]);
				lastExchangeIndex = j;
			}
		i = lastExchangeIndex;
	}
}
#endif // !ARRAY_BASED_SORTING_FUNCTIONS
