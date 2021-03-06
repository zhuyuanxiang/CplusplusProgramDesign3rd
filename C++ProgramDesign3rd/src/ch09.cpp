#include <iostream>
#include "ch09.h"

using namespace std;

void ch09()
{
	// P283，Ch09，集合类和集合数据的组织
	//基本数据类型是C++编译系统预定义的，而自定义类型的数据是由多个基本类型或者自定义类型的元素组成的，称为集合数据。
	//对于集合数据，仅有系统预定义的操作是不够的，还需要设计与某些具体问题相关的特殊操作，并且按照面向对象的方法将数据与操作封装起来，称为集合类。
	//集合类分为两种：线性集合、非线性集合。
	//	线性集合中的元素按照位置排列有序。
	//	非线性集合中的元素不用位置顺序来标识元素。
	//集合数据两类常用的算法：排序和查找。
	//	排序（sorting）又称为分类或者整理，是将一个无序序列调整为有序的过程。排序方法：直接插入排序、直接选择排序、起泡排序方法
	//	查找（searching）是在一个序列中按照某种方式找出需要的特定数据元素的过程。查找方法 ：顺序查找、折半查找
	//9.1 函数模板与类模板
	//	参数化多态性，就是将程序所处理的对象的类型参数化，使得一段程序可以用于处理多种不同类型的对象
	//	9.1.1 函数模板
	//	9.1.2 类模板：用户可以为类声明一种模式，使得类中的某些数据成员、某些成员函数的参数、某些成员函数的返回值能够取得任意类型（包括系统预定义的和用户自定义的）
	//	类是对一组对象的公共性质的抽象，类模板是对不同类的公共性质的抽象，因此类模板属于更高层次的抽象。
	//	注：模板类的成员函数必须是函数模板。
	//9.2 线性集合
	//	9.2.1 线性集合的概念：在线性集合中，访问元素的方法包括（直接访问、顺序访问、索引访问）
	//		对可直接访问的线性集合，可以直接访问群体中的任何一个元素，而不必首先访问该元素之前的元素。
	//		对可顺序访问的线性集合，只能按照元素的排列顺序从头开始依次访问各个元素。
	//		栈是只能从一端访问的线性群体，可以访问的这一端称栈顶，另一端称栈底。
	//		对栈顶位置的标记称为栈顶指针，对栈底位置的标记称为栈底指针。
	//		向栈顶添加元素称为“压入栈”，删除栈顶元素称为“弹出栈”。
	//		栈中元素的添加和删除操作具有“后进先出”（LIFO）的特性。
	//		队列是只能向一端添加元素，从另一端删除元素的线性集合，可以添加元素的一端称为队尾，可以删除元素的一端称为队头。
	//		对队头位置的标记称为队头指针，对队尾位置的标记称为队尾指针。
	//		向队尾添加元素称为“入队”，删除队头元素称为“出队”。
	//		队列中的元素的添加和删除操作具有“先进先出”（FIFO）的特性。
	//	9.2.2 直接访问集合（数组类）
	//		1. 浅拷贝与深拷贝
	//		2. 与人不同的运算符
	//		3. 指针转换运算符的作用
	//	9.2.3 顺序访问集合（链表类）：应用动态数据结构，在程序运行期间根据需要动态申请内存，并且建立元素之间的线性关系。
	//		链表是一种动态数据结构，用来表示顺序访问的线性集合。
	//		链表是由一系列结点组成的，结点可以在运行时动态生成。每一个结点包括数据域和指向链表中下一个结点的指针（即下一个结点的地址）。
	//		指针是维系结点的纽带，结点中可以有不止一个用于连接其他结点的指针。
	//		如果链表每个结点中只有一个指向后继结点的指针，称为单链表。
	//		如果链表每个结点中拥有两个用于连接其他结点的指针，一个指向前趋结点（称前趋指针），另一个指向后继结点（称后继指针），称为双向链表。
	//		链表的第一个结点称为头结点；最后一个结点称为尾结点，尾结点的后继指针为空（NULL）。
	//		1. 结点类：链表的结点包括数据和指针域，是链表的基本构件。
	//			结点的数据域用于存放集合中的元素的内容，既可以是若干个基本类型的数据，也可以是自定义类型的数据，甚至是内嵌的对象。
	//			结点的指针域用于存入链表中另一个结点的地址。
	//	9.2.4 栈类：特殊的线性集合。可以用数组和链表来存储。
	//		栈的基本状态有：一般状态、栈容、栈满。
	//		当栈中没有元素时称为栈空；当栈中元素个数达到上限时，称为栈满；栈中有元素，但是未达到栈满状态时，即处于一般状态。
	//	9.2.5 队列类：只能在一端（队头）删除元素（出队），另一端（队尾）添加元素（入队）。
	//		队列的三种状态：队空、队满、一般状态
	//9.3 集合数据的组织
	//	9.3.1 插入排序：将待排序元素按其关键字值的大小插入到已经排序序列的位置，直到等排序元素全部插入为止。
	//	9.3.2 选择排序：从待排序序列中选择一个关键字最小的元素，顺序排在已经排序序列的最后，直到全部完成。
	//	9.3.3 交换排序：两两比较待排序序列中的元素，并且交换不满足顺序要求的元素，直到全部满足顺序要求为止。
	//		最简单的交换排序方法：起泡排序
	//	9.3.4 顺序查找：最简单、最基本的查找方法。从数组的首元素开始，逐个元素与待查找的关键字进行比较，直到找到相等的。若整个数组没有与待查找的关键字相等的元素，则查找失败。
	//	9.3.5 折半查找：在一个元素排序有序的数组可以执行折半查找。对于已经按照关键字排序的序列，经过一次产，可装饰序列分割成两部分，然后只在有可能包含待查元素的部分中查找，直到确认成功或者失败。


	cout << "===>Ch09<===" << endl;

	src0901(); cout << endl;
	src0902(); cout << endl;
	//src0903(); cout << endl;
	//src0909(); cout << endl;
}
