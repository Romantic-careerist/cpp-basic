#include<iostream>
using namespace std;

//只要有纯虚函数，就成为抽象类
//纯虚函数语法：virtual 返回值类型 函数名（参数列表）=0；

class Base
{
public:
	virtual void func() = 0;
};

class Son :public Base
{
	//子类必须从重写父类中的纯虚函数，否则无法实例化
public:
	void func()
	{
		cout << "+++";
	};
};
void test01()
{
	
	/*Base b;抽象类无法实例化对象
	new Base;*/
	Son s;
	Base* base = new Son;
	base->func();
}

int main()
{
	test01();

	cin.get();
	return 0;
}