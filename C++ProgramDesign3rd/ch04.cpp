﻿#include <iostream>

using namespace std;

void src0401();
void src0402();
void src0403();
void src0404();
void src0405();

void ch04()
{
	//	P90，Ch04，类与对象
	//4.1 面对对象程序设计的基本特点
	//	4.1.1 抽象：对具体问题（对象）进行概括，抽出一类对象的公共性质，并且加以描述的过程（数据抽象、行为抽象或功能抽象或代码抽象）。
	//	4.1.2 封装：将抽象得到的数据和行为（或者功能）相结合，形成一个有机的整体，也就是将数据与操作数据的函数代码进行有机地结合，形成“类”，其中的数据和函数都是类的成员。
	//	4.1.3 继承：允许程序在保持原有类特性的基础上，进行更具体、更详细的说明。
	//	4.1.4 多态：一段程序能够处理多种类型对象的能力。包括：强制多态、重载多态、类型参数化多态、包含多态。
	//  强制多态：将一种类型的数据转换成另一种类型的数据来实现，即数据类型转换（显式、隐式）
	//	重载多态：同名函数，不同含义。（ch03 - 函数重载、ch08 - 运算符重载）
	//	包含多态：ch08 - 虚函数实现。
	//	类型参数化多态：ch09 - 模板（函数模板、类模板）
	//4.2 类和对象
	//	类是对逻辑上相关的函数与数据的封装，是对问题的抽象描述。
	//	4.2.1 类的定义：数据成员和函数成员
	//	4.2.2 类成员的访问控制：公有类型（public）、私有类型（private）、保护类型（protected）
	//	公有类型成员：定义了类的外部接口
	//	私有类型成员：只能被本类的成员函数访问
	//	保护类型成员：允许被派生类访问
	//	4.2.3 类的成员函数：实现时需要指定类名
	//	类的内联函数：隐式声明（将函数体放在类体内）；显式声明（inline）
	//	4.2.4 对象：类的某一特定实体（也称实例）
	//4.3 构造函数和析构函数
	//	4.3.1 构造函数：在对象被创建时利用特定的值构造对象，将对象初始化为一个特定的状态。在对象被创建时自动调用。
	//	4.3.2 拷贝构造函数：特殊的构造函数，其形参是本类的对象的引用。作用是使用一个已经存在的对象（由拷贝构造函数的参数指定），去初始化同类的一个新对象。
	//	默认的拷贝构造函数：把原对象的每个数据成员的值复制到新建立的对象中。
	//	4.3.3 析构函数：用来完成对象被删除前的一些清理工作，在对象的生存期即将结束的时刻被自动调用的。
	//4.4 类的组合
	//	4.4.1 组合：在一个类内嵌其他类的对象作为成员，相互之间的关系是包含与被包含。
	//	当创建类的对象时，如果具有内嵌对象成员，那么成员对象先被创建。
	//	在创建对象时，既要对本类的基本类型数据成员进行初始化，还要对内嵌对象成员进行初始化。
	//	析构函数的调用执行顺序与构造函数正好相反。
	//	4.4.2 前向引用声明：解决循环引用产生的问题


	cout << "===>Ch04<===" << endl;

	//src0401(); cout << endl;
	//src0402(); cout << endl;
	//src0403(); cout << endl;
	//src0404(); cout << endl;
	src0405(); cout << endl;
}
