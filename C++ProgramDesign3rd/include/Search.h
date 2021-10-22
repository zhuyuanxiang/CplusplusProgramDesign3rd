#pragma once
#ifndef SEARCH_METHODS
#define SEARCH_METHODS

// P320，顺序查找
template <class T>
int SeqSearch(T list[], int n, T key)
{
	for (int i = 0; i < n; i++)
		if (list[i] == key)
			return i;
	return -1;
}

// P321，折半查找
template <class T>
int BinSearch(T list[], int n, T key)
{
	T midvalue;
	int low = 0, high = n - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		midvalue = list[mid];
		if (key == midvalue)
			return mid;
		else if (key < midvalue)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}
#endif // !SEARCH_METHODS
