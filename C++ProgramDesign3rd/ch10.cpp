﻿#include <iostream>
#include "ch10.h"

using namespace std;

void ch10()
{
	// P326，Ch10，泛型程序设计与C++标准模板库
	//10.1 泛型程序设计的概念与术语：图10 - 1
	//	10.1.1 泛型程序设计
	//		泛型程序设计的首要目标：标准容器（container），进而是标准算法（algorithm）。
	//		泛型程序设计不是面向对象程序设计。
	//		算法是需要遍历数据结构、访问数据元素经。在STL中充当算法与容器之间的接口的是迭代器（iterator）。
	//		构建STL的框架的4个组件：容器（container）、迭代器（iterator）、算法（algorithm）、函数对象（function object）。
	//	10.1.2 命名空间的概念
	//		命名空间：将不同的标识符集合在一个命名作用域（named scope）内。
	//		在UML中，使用包图来表示命名空间。
	//	10.1.3 头文件命名规则
	//		STL中的组件名称：
	//		1）向量容器（<vector>）、列表容器（<list>）、双端队列容器（<deque>）。
	//		2）集合容器和多重集合容器（<set>）；映射容器（<map>），多重映射容器（multimap）在（<map>）中
	//		3）stack适配器（<stack>）；queue和priority_queue适配器位于（<queue>）
	//		4）算法位于（<algorithm>）中，通用数值算法位于（<numeric>）
	//		5）迭代器类和迭代器适配器位于（<iterator>）
	//		6）函数对象类和函数适配器位于（<functional>）
	//	10.1.4 标准模板库相关概念和术语
	//		1）容器：容纳、包含一组元素或者元素集合的对象。作为通用元素收集器（generic holder）
	//			当容器类包含不同类型的元素时，称为异类容器类（heterogenous container）；
	//			当容器类包含相同匠元素时，称为同类容器类（homogenous container）。
	//			7种基本容器：向量（vector）、双端队列（deque）、列表（list）、集合（set）、多重集合（multiset）、映射（map）、多重映射（multimap）
	//			顺序容器（sequence container）：将一组具有相同类型的元素以严格的线性形式组织起来，包括：向量、双端队列和列表
	//			关联容器（associative container）：根据一组索引来快速提取元素的能力，包括：集合和映射
	//		2）适配器：是一种接口类，为已经存在的类提供新的接口。
	//			适配器修改或者调整其他类的接口，是简化、约束、使之案例、隐藏或者改变被修改类提供的服务集合。
	//			3种适配器：容器适配器、迭代器适配器、函数对象适配器。
	//			容器适配器用来扩展7种基本容器
	//		3）迭代器：面向对象版本的指针，提供了访问容器和序列中每个元素的方法 。
	//		4）算法：70多个算法。包括：查找、排序、消除、记数、比较、变换、转换和容器管理等等。
	//		5）容器的接口：容器的方法（函数）和运算符。
	//			表10 - 1：所有标准容器定义的运算符
	//			表10 - 2：每种容器定义的迭代和访问方法
	//10.2 C++ 标准模板库中的容器
	//	10.2.1 顺序容器：向量、列表、双端队列
	//		1. 顺序容器的接口：插入、删除、迭代访问
	//		2. 向量容器
	//			1）构造与析构函数
	//			2）使用容器：访问容器信息、容器添加元素、删除容器元素、访问容器元素
	//		3. 双端队列容器
	//			1）构造函数
	//			2）使用容器：访问容器信息、容器添加元素、删除容器元素、访问容器元素
	//		4. 列表容器
	//			1）构造函数
	//			2）使用容器：访问容器信息、容器添加元素、删除容器元素、访问容器元素？
	//	10.2.2 容器适配器
	//		1. 标准栈容器：使用适配器与一种基础容器相结合来实现。
	//			基础容器提供栈的存储实现；
	//			栈适配器提供特殊的操作功能，可以从基础容器的末尾插入或者删除
	//		2. 标准队列容器：使用适配器与一种基础容器相结合来实现。
	//			基础容器通常是列表容器（list）或者双端队列容器（dbque）。
	//10.3 迭代器（面向对象版本的指针）
	//	迭代器提供了访问容器和序列中每个元素的方法，STL 算法利用迭代器对存储在容器中的元素序列进行遍历
	//	迭代器是算法和容器的“中间人”，使用迭代器算法函数可以访问容器中指定位置的元素，而无需关心元素的具体位置
	//	10.3.1 迭代器的类型
	//		1. 迭代器分类
	//			- 输入迭代器：可以从序列中读取数据，但是不保证向其中写入数据
	//			- 输出迭代器：允许向序列中写入数据，但是不保证从其中读取数据
	//			- 前向迭代器：既是输入迭代器，还是输出迭代器，既支持数据读取，也支持数据写入，并且可以对序列进行单向的遍历
	//			- 双向迭代器：支持两个方向的前向迭代器，
	//			- 随机访问迭代器：支持在序列中的任意两个位置之间进行跳转的双向迭代器
	//		2. 迭代器适配器
	//			适配器是用来修改或者调整其他类接口的，迭代器适配器是用来扩展（或者调整）迭代器功能的类。
	//			STL中定义的两类迭代器适配器：
	//				- 逆向迭代器适配器：通过重新定义递增运算和递减运算，使其行为正好倒置。使用这类迭代器，算法将以逆向次序处理元素
	//				- 插入型迭代器适配器：将赋值操作转换为插入操作，STL提供三种插入型迭代器（后插入、前插入、普通插入）
	//				- 后插入：将一个元素追加到容器尾部，用于(vector, deque, list, string)
	//				- 前插入：将一个元素追加到容器头部，用于(deque)
	//				- 普通插入：根据容呼插入位置进行初始化，适用于所有容器
	//10.4 标准C++库中的算法
	//		STL标准模板库中的算法大致可以分为4类：
	//		1. 非可变序列算法：对容器进行操作时不会改变容器的内容；
	//		2. 可变序列算法：对容器进行操作时会改变容器的内容；
	//		3. 排序相关的算法：包括--排序算法、合并算法、二分查找算法、有序序列的集合操作算法等
	//		4. 通用数值算法：（数量较少）
	//	10.4.1 STL通用步进的调用形式（？）
	//	10.4.2 不可变序列算法（表10 - 4，P350）
	//	10.4.3 可变序列算法（表10 - 5，P352）
	//		对序列容器的操作：复制（copy）、生成（generate）、删除（remove）、替换（replace）、
	//		倒序（reverse）、旋转（rotate）、交换（swap）、变换（transform）、
	//		分割（partition）、剔除（unique）、填充（fill）、洗牌（shuffle）
	//	10.4.4 排序相关算法
	//		- 4个排序算法：sort, partial_sort, partial_sort_copy, stable_sort
	//		- 4个二分查找算法：binary_search, lower_bound, uper_bound, equal_range
	//		- 2个用于合并有序区间的通用算法： merge, inplace_merge
	//		- 4个最值算法：min, max, min_element, max_element
	//		- 3个排列相关算法：lexicographical_compare, next_permutation, prev_permutation
	//		- 5个有序序列上的集合操作：includes, set_union, set_intersection, set_difference, set_symmetric_difference
	//		- 4个堆上的操作：make_heap, pop_heap, push_heap, sort_heap
	//		- nth_element：按特定规则重排元素
	//	10.4.5 数值算法
	//		头文件（numeric）：accumulate, partial_sum, adjacent_difference, inner_product
	//10.5 函数对象
	//	1. 函数对象：STL提供的第四类主要组件
	//	函数对象：就是一个行为类似函数的对象，可以不需要参数，可以带有若干参数，功能是获取一个值，或者改变操作的状态
	//	任何普通的函数和任何重建了调用运算符 operator() 的类的对象都满足函数对象的特征
	//		P363，表10-8：标准库中的STL函数对象
	//		- plus<T>：输入两个类型为T的操作数 x 与 y，返回 x+y
	//		- multiplies<T>：输入两个类型为T的操作数 x 与 y，返回 x*y
	//		- minus<T>：输入两个类型为T的操作数 x 与 y，返回 y-x
	//		- divide<T>：输入两个类型为T的操作数 x 与 y，返回 y/x
	//		- modulus<T>：输入两个类型为T的操作数 x 与 y，返回 x%y
	//		- negate<T>：输入一个类型为T的操作数 x，返回 -x
	//		- equal_to<T>：输入两个类型为T的操作数 x 与 y，返回 x==y
	//		- not_equal_to<T>：输入两个类型为T的操作数 x 与 y，返回 x!=y
	//		- greater<T>：输入两个类型为T的操作数 x 与 y，返回 x>y
	//		- less<T>：输入两个类型为T的操作数 x 与 y，返回 x<y
	//		- greater_equal<T>：输入两个类型为T的操作数 x 与 y，返回 x>=y
	//		- less_equal<T>：输入两个类型为T的操作数 x 与 y，返回 x<=y
	//		- logical_and<T>：输入两个类型为T的操作数 x 与 y，返回 x&&y
	//		- logical_or<T>：输入两个类型为T的操作数 x 与 y，返回 x||y
	//		- logical_not<T>>：输入一个类型为T的操作数 x，返回 !x

	cout << "===>Ch10<===" << endl;

	//src1001(); cout << endl;
	//src1002(); cout << endl;
	//src1003(); cout << endl;
	//src1004(); cout << endl;
	//src1005(); cout << endl;
	//src1006(); cout << endl;
	//src1007(); cout << endl;
	//src1008(); cout << endl;
	//src1009(); cout << endl;
	//src1010(); cout << endl;
	//src1011(); cout << endl;
	//src1012(); cout << endl;
	src1013(); cout << endl;
	src1014(); cout << endl;
	src1015(); cout << endl;
}
