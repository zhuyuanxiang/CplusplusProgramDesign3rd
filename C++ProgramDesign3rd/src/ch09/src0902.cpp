#include <iostream>
#include <cstdlib>

using namespace std;

struct Student	// 结构体
{
	int id;		// 学号
	float gpa;	// 平均分
};

template<class T>	// 声明函数模板
class Store
{
private:
	T item;				// item 用于存放任意类型的数据
	int haveValue;		// 标记 item 是否已经被存放
public:
	Store(void);		// 默认形式（无形参））的构造函数
	T GetElem(void);	// 提取数据的函数
	void PutElem(T x);	// 存放数据的函数
};

// 下面实现各成员函数
// 注：模板类的成员函数，若在类外实现，则必须是模板函数
template<class T>
Store<T>::Store(void) :haveValue(0) { }

template<class T>
T Store<T>::GetElem(void)
{
	if (haveValue == 0)
	{
		cout << "No item present!" << endl;
		exit(1);
	}
	return item;
}

template<class T>
void Store<T>::PutElem(T x)
{
	haveValue++;
	item = x;
}

void src0902()
{
	// P288，类模板的实例
	cout << "--->" << "代码09-02（类模板的实例）" << "<---" << endl;

	Student g = { 1000,23 };
	Store<int> S1, S2;
	S1.PutElem(3);
	S2.PutElem(-7);
	cout << "S1=" << S1.GetElem() << ", S2=" << S2.GetElem() << endl;

	Store<Student> S3;

	S3.PutElem(g);
	cout << "The student id is " << S3.GetElem().id << endl;

	Store<double>D;
	cout << "D 没有初始化，无法正确读取！" << endl;
}
