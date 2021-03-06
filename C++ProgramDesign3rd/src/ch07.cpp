#include <iostream>
#include "ch07.h"

using namespace std;

void ch07()
{
	// P207，Ch07，继承与派生
	//7.1 类的继承与派生
	//	7.1.1 继承与派生的实例
	//		继承就是从先辈处得到属性和行为特征。类的继承，是新的类从已有类那里得到已有的特征。从已有类产生新类的过程就是类的派生。
	//	7.1.2 派生类的定义
	//		单继承：一个派生类只有一个直接基类
	//		多继承：一个派生类可以同时有多个基类
	//		在类族中，直接参与派生出某类的基类称为直接基类；基类的基类甚至更高层的基类称为间接基类。
	//		继承的方式规定了如何访问从基类继承的成员。
	//		派生类成员是指除了从基类继承来的所有成员之外，新增加的数据和函数成员。
	//	7.1.3 派生类的生成过程
	//		1. 吸收基类成员
	//		2. 改造基类成员
	//		3. 添加新的成员
	//7.2.访问控制：public, protected, private
	//	派生类中的新增成员访问从基类继承的成员；在派生类外部（非类族内的成员），通过派生类的对象访问从基类继承的成员
	//	7.2.1 公有继承：当类的继承方式为公有继承时，基类的公有和保护成员的访问属性在派生类中不变，而基类的私有成员不可直接访问。
	//	7.2.2 私有继承：当类的继承方式是私有继承时，基类中的公有成员和保护成员都以私有成员身份出现在派生类中，而基类的私有成员不可直接访问。
	//	7.2.3 保护继承：当类的继承方式是保护继承时，基类中的公有成员和保护成员都以保护成员身份出现在派生类中，而基类的私有成员不可直接访问。
	//7.3 类型兼容规则：在需要基类对象的任何地方，都可以使用公有派生类的对象来替代。替代之后，派生类对象就可以作为基类的对象使用，也只能使用基类的成员。
	//7.4 派生类的构造和析构函数
	//	7.4.1 构造函数：构造派生类的对象时，就要对基类数据成员、新增数据成员和成员对象的数据成员进行初始化。
	//		如果基类声明了带有形参表的构造函数时，派生类就应当声明构造函数。
	//		派生类构造函数执行的一般顺序如下：
	//		1）调用基类构造函数，调用顺序按照它们被继承时声明的顺序（从左到右）；
	//		2）调用内嵌成员对象的构造函数，调用顺序按照它们在类中声明的顺序；
	//		3）派生类的构造函数体中的内容。
	//	7.4.2 拷贝构造函数：
	//	7.4.3 析构函数：调用顺序（派生类析构函数体、派生类对象成员所在类的析构函数、基类析构函数）
	//7.5 派生类成员的标识和访问
	//	1）不可访问的成员：从基类私有成员继承而来的
	//	2）私有成员：从基类私有继承而来的，派生类新增加的私有成员
	//	3）保护成员：从基类保护继承而来的，派生类新增加的私有成员
	//	4）公有成员：从基类公有继承而来的，派生类新增加的私有成员
	//	7.5.1 作用域分辨
	//		在不同的作用域声明的标识符，可见性原则是：如果存在两个或者多个具有包含关系的作用域，
	//		外层声明的一个标识符，而内层没有再次声明同名的标识符，那么外层标识符在内层仍然可见；
	//		如果在内层声明了同名标识符，则外层标识符在内层不可见，这时称内层变量隐藏了外层同名变量，这种现象称为隐藏规则。
	//		在没有虚函数的情况下（见Ch08）如果派生类中声明了与基类成员函数同名的新函数，即使函数的参数表不同，
	//		从基类继承的同名函数的所有重载形式也都会被隐藏。
	//		在没有虚函数的情况下，如果某派生类的多个基类拥有同名的成员，而派生类也有同名成员，则派生类成员将隐藏所有基类的同名成员。
	//	7.5.2 虚基类：将共同基类设置为虚基类，从不同路径继承的同名数据成员在内存中只有一个拷贝，同名函数只有一个映射。
	//	7.5.3 虚基类及其派生类的构造函数
	cout << "===>Ch07<===" << endl;
}
