#include<iostream>
using namespace std;

class Persson
{
};
void test01()
{
	Persson p;
	cout << "sizeif p= " << sizeof(p) << endl;
	//空对象占用内存空间为1
	//编译器会给每个空对象分配一个内存空间，为了区分空对象占内存的位置
	//每个空对象应有一个独一无二的内存地址
}

class Person
{
	int m_A;//非静态成员变量  属于类的对象上
	static int m_B;//静态成员变量 不属于类的对象上
	void func() {}//非静态成员函数 不属于类的对象上
	static void func2() {}//静态成员函数 不属于类的对象上

};
int Person::m_B = 0;

void test02()
{
	Person p;
	cout << "sizeif p= " << sizeof(p) << endl;
}



int main()
{
	//test01();
	test02();


	cin.get();
	return 0;
}