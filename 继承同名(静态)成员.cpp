#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 10;
	}

	void func()
	{
		cout << "Base-func()" << endl;
	}
	void func(int a)
	{
		cout << "Base-func(int a)" << endl;
	}
	int m_A;

	static void func()
	{
		cout << "Base-static-func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base-static-func(int a)" << endl;
	}
	static int m_C;
};
int Base::m_C = 100;

class Son :public Base
{
	// 需要访问被隐藏的父类成员时显式引入父类成员（若父类成员非private
	//using Base::m_A;  
public:
	Son()
	{
		m_A = 20;
	}

	void func()
	{
		cout << "Son-func()" << endl;
	}

	int m_A;

	static void func()
	{
		cout << "Son-static-func()" << endl;
	}

	static int m_C;
};
int Son:: m_C=200;

void test01()//1.同名成员变量/函数
{
	Son s;
	cout << "Son.m_A= " << s.m_A << endl;
	cout << "Base.m_A= " << s.Base::m_A << endl;
	s.func();
	s.Base::func();

	//如果子父有同名成员函数，子类同名成员会隐藏父类所有的同名成员函数
	s.Base::func(100);//参数不同但依旧要加作用域
}

void test02()//2.1同名静态成员属性
{
	cout << "1.通过对象访问" << endl;
	Son s;
	cout << "Son.m_C=" << s.m_C << endl;
	cout << "Base.m_C=" << s.Base::m_C << endl;

	cout << "2.通过类名访问" << endl;
	cout << "Son.m_C=" << Son::m_C << endl;
	cout << "Base1.m_C=" << Base::m_C << endl;//直接访问父类
	cout << "Base2.m_C=" << Son::Base::m_C << endl;//通过子访问父
	//此处第一个：：代表通过类名方式访问；第二个：：代表访问父类作用域下的成员属性
}

void test03()//2.2同名静态成员方法
{
	cout << "1.通过对象访问" << endl;
	Son s;
	s.func();
	s.Base::func();

	cout << "2.通过类名访问" << endl;
	Son::func();
	Son::Base::func();
	Sun::Base::func(100);
}
int main()
{
	//test01();
	//test02();
	test03();

	cin.get();
	return 0;
}