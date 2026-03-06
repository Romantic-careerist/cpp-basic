#include<iostream>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	//利用成员函数重载左移运算符 p.operator<<(cout)简化版本p<<cout
	//不会利用成员函数重载<<运算符，无法实现cout在左侧
	/*void operator<<(cout)
	{

	}*/
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:	
	int m_A;
	int m_B;

};

ostream& operator<<(ostream &cout, Person &p)//本质简化cout<<p
{
	cout << "m_A: " << p.m_A
		<< " m_B: " << p.m_B << endl;
	return cout;//此函数cout可以改为别的 如：out
}

void test01()
{
	Person p(10,10);
	cout << p << "hello world" << endl;//本质 operator<<(cout,p)
}
int main()
{
	test01();
	cin.get();
	return 0;
}