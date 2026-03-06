#include<iostream>
using namespace std;

class Person
{
public://类内声明
	static int m_A;//静态成员变量,可有别的权限

	static void func()//静态成员函数，也有访问权限
	{
		m_A = 0;
		//m_B = 200;//静态成员函数只能访问静态成员变量
		//静态static成员函数它只属于类本身不属于每一个对象实例，独立存在。
		// 非静态成员，仅当实例化对象之后才存在。
		// 静态成员函数产生在前，非静态成员函数产生在后，静态函数无法访问一个不存在的东西。
		cout << "static void func调用" << endl;
	}

	int m_B;

};
int Person::m_A = 100;//类外初始化
//int Person::m_B = 200;

//静态成员变量不属于某个对象，所有对象都共享同一数据
//两种访问方式
void test()
{
	//1.通过对象访问//非静态只能对象访问
	Person p;
	cout << p.m_A << endl;
	p.func();

	Person p1;
	p1.m_A = 200;
	cout << p.m_A << endl;
	
	//2.通过类名访问
	cout << Person::m_A << endl;
	Person::func();
}

void test1()
{
	Person p2;
	p2.func();

	Person::func();
}


int main()
{
	test();
	test1();

	cin.get();
	return 0;
}

