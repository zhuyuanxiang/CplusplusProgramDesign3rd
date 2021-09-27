﻿#include <iostream>
#include "include/ch06.h"

using namespace std;

void ch06()
{
	// P157，Ch06，数据、指针与字符串
	//6.1 数组：具有一定顺序关系的若干对象的集合体，组成数组的对象称为该数组的元素。
	//	每个元素有n个下标的数组称为n维数组。
	//	6.1.1 数组的声明与使用
	//		1. 数组的声明：数组属于自定义数据类型，在使用之前需要进行类型声明。（数组名称、数组元素的类型、数组的结构）
	//		数组名称是一个常量，代表着数组元素在内存中的起始地址。
	//		2. 数组的使用：使用数组时，只能分别对数组的各个元素进行操作。数组的元素由下标来区分。
	//		使用规则：
	//			- 数组元素的下标表达式可以是任意合法的自述表达式，其结果必须为整型数；
	//			- 数组元素的下标值不得超过声明时所确定的上下界，以免出现数组越界错误。
	//	6.1.2 数组的存储与初始化
	//		1. 数组的存储：数组元素在内存中是顺序地、连续地存储。
	//		2. 数组的初始化：在声明数组时给部分或者全部的元素赋初值。
	//	6.1.3 数组作为函数参数：数组元素和数组名称都可以作为函数的参数以实现函数间数据的传递与共享。
	//		使用数组名称传递数据时，传递的是存储数组的地址。
	//	6.1.4 对象数组：
	//		使用构造函数初始化数组对象时，调用与形参类型相匹配的构造函数为数组中的每个元素进行初始化，如果没有指定数组元素的初始值，就调用默认构造函数。

	cout << "===>Ch06<===" << endl;

	src0601(); cout << endl;
	src0602(); cout << endl;
	src0603(); cout << endl;
	src0604(); cout << endl;
}
