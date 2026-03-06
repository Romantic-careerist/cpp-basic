#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base构造函数" << endl;
	}
	~Base()
	{
		cout << "Base析构函数" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son构造函数" << endl;
	}
	~Son()
	{
		cout << "Son析构函数" << endl;
	}
};

void test01()
{
	Base b;
	
	Son s;//构造先父再子，析构先子再父  栈先进后出

}
int main()
{
	test01();
	system("pause");
	return 0;
}