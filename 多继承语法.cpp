#include<iostream>
using namespace std;

class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};

class Base2
{
public:
	Base2()
	{
		m_A = 200;
	}
	int m_A;
};

//多继承语法：class 子类:继承方式 父类1，继承方式 父类2
class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test01()
{
	Son s1;
	cout << "sizeof s1=" << sizeof(s1) << endl;
	//父类出现相同成员（二义性），加作用域区分
	cout << "m_A= " << s1.Base1::m_A << endl;
	cout << "m_A= " << s1.Base2::m_A << endl;
}

int main()
{
	test01();
	cin.get();
	return 0;
}