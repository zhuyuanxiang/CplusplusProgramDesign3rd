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
	//6.2 指针
	//	6.2.1 内存空间的访问方式：C++使用指针类型作为专门用来存放内存单元地址的变量类型
	//	6.2.2 指针变量的声明：指针也是一种数据类型，具有指针类型的变量称为指针变量。指针变量用于存放内存单元地址。
	//	所有指针本身的值默认都是`unsigned long int`
	//	6.2.3 与地址相关的运算
	//	- “ * ”为指针运算符，也称解析，表示获取指针所指向的变量的值
	//	- “ & ”为取地址运算符，用来得到一个对象的地址
	//	6.2.4 指针的赋值：src0605
	//		-	指向常量的地：不能通过指针来改变所指对象的值，但是可以改变指针；
	//		-	声明指针类型的常量：指针本身的值不能改变
	//		-	指针的值只能赋比例相同类型的指针，但是 void 类型的指针可以存储任何类型的对象地址，完成类型的强制转换
	//	6.2.5 指针运算：指针变量可以参与算术运算、关系运算和赋值运算
	//		指针与整数进行的加减运算，表示指针移动数据条数，例如：“指针++”表示指针指向下一个数据的地址。
	//		指针的算术运算与数组的使用相关。
	//		指针的关系运算：指向相同数据类型数据的指针之间进行的关系运算。
	//		指针的赋值运算：赋给指针变量的值必须是地址常量 （如数组名称）或者地址变量，不能是非0的整数。（赋0表示空指针）
	//	6.2.6 用指针处理数组元素：src0607
	//	6.2.7 指针数组：数组的每个元素都是同一类型的指针变量 src0608, src0609
	//	6.2.8 用指针作为函数参数：以指针作为形参，在调用时实地值传递给形参，也就是使实参和形参指针变量指向同一内存地址。
	//		以指针作为函数的三个作用：
	//			1. 使实参与形参指针指向共同的内存空间，以达到参数双向传递的目的
	//			2. 减少函数调用时数据传递的开销
	//			3. 传递函数代码的首地址
	//	6.2.9 指针型函数：函数的返回值是指针类型，在函数结束时把大量的数据从被调函数返回到主调函数。
	//	6.2.10 指向函数的指针：存放函数代码首地址，在程序中像使用函数名称一样使用指向函数的指针来调用函数。
	//	6.2.11 对象指针
	//		1. 对象指针的一般概念
	//		2. this 指针
	//		3. 指向类的非静态成员的指针
	//		4. 指向类的静态成员指针


	cout << "===>Ch06<===" << endl;

	src0601(); cout << endl;
	src0602(); cout << endl;
	src0603(); cout << endl;
	src0604(); cout << endl;
	src0605(); cout << endl;
	src0606(); cout << endl;
	src0607(); cout << endl;
	src0608(); cout << endl;
	src0609(); cout << endl;
	//src0610(); cout << endl;
	src0611(); cout << endl;
	src0612(); cout << endl;
	src0613(); cout << endl;
	src0614(); cout << endl;
	src0615(); cout << endl;
}
