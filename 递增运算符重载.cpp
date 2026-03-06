#include<iostream>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger& myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}

	//重载前置++运算符
	MyInteger& operator++()
	//返回引用&以便进行链式操作时++（++myint)后输出myint时正常
	//为了一直对一个数据进行操作
	{
		++m_Num;
		return *this;
	}

	//重载后置++运算符
	MyInteger& operator++(int)//不可进行链式操作
	{
		++m_Num;
		return*this;
	}
	
private:
	int m_Num;
};

//重载左移运算符
ostream& operator<<(ostream& cout, MyInteger& myint)
{
	cout << myint.m_Num << endl;
	return cout;
}
void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;

	cout << myint++ << endl;
}

int main()
{
	test01();

	cin.get();
	return 0;
}