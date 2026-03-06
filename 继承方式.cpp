#include<iostream>
using namespace std;

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1//1.公共继承
{
public:
	void func()
	{
		m_A = 10;//public
		m_B = 10;//protected
		m_C = 10;//父类private子类无法访问
	}
	int m_C;//优先在当前类作用域查找成员，子类的 m_C 直接遮蔽了父类的同名成员
};

void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//protected 类外访问不到
}


class Son2 :protected Base1//2.保护继承
{
public:
	void func()
	{
		m_A = 100;//protected
		m_B = 100;
		//m_C = 100;//父类private子类无法访问
	}
};

void test02()
{
	Son2 s2;
	//s2.m_A = 10;//protected
}

class Son3 :private Base1//3.私有继承
{
public:
	void func()
	{
		m_A = 100;//private变成子类私有成员，类外无法访问
		m_B = 100;//private
		//m_C = 100;//父类private子类无法访问
	}
};

void test03()
{
	Son3 s3;
	//s3.m_A = 100;//类外无法访问
}

class GrandSon3 :public Son3
{
public:
	void func()
	{
		/*子类全是私有，孙子类访问不到
		m_A = 1000;
		m_B = 1000;*/
	}
};

int main()
{
	cin.get();
	return 0;
}