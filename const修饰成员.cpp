#include<iostream>
using namespace std;

class Person
{
public:
	//常函数
	void showPerson()const//const Person*const this 修饰this指针，值也不能改
	{
		//this指针的本质是指针常量 指针的指向是不可以修改的
		//this->m_A = 100;//Person*const this
		this->m_B = 100;
		//this = NALL;//this指针不可以修改指针的指向
	}

	void func()
	{

	}
	int m_A;
	mutable int m_B;//特殊变量 mutable修饰常函数的值可改
};

void test()
{
	Person p;
	p.showPerson();
}

//常对象
void test02()
{
	const Person p;//在对象前加const,变为常对象
	//p.m_A = 100;
	p.m_B = 100;

	//常对象只能调用常函数
	p.showPerson();
	//p.func();
}


int main()
{

	cin.get();
	return 0;
}