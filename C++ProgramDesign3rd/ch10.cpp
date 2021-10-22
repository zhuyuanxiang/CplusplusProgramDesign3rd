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
	cout << "===>Ch10<===" << endl;

	//src1001(); cout << endl;
	src1002(); cout << endl;
	src1003(); cout << endl;
}