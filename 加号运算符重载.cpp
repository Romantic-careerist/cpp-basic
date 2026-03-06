#include<iostream>
using namespace std;

class Person
{
public:
	//1.成员函数重载+号
	/*Person operator+(Person& p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/


	int m_A;
	int m_B;
};

//2.全局函数重载+号
Person operator+(Person &p1, Person &p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

//函数重载
Person operator+(Person& p1, const int&num)
{
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

void test1()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;

	Person p2;
	p2.m_A = 10;
	p2.m_B = 20;
	//若函数名不是operator+，则需写成Person p3=p1.函数名（p2）
	//Person p3 = p1.operator+(p2);//成员函数重载本质调用
	Person p3 = operator+(p1, p2);//全局函数重载本质调用
	//Person p3 = p1 + p1;
	cout << "p3.m_A: " << p3.m_A << endl;
	cout << "p3.m_B: " << p3.m_B << endl;

	Person p4 = p1 + 10;
	cout << "p4.m_A: " << p4.m_A << endl;
	cout << "p4.m_B: " << p4.m_B << endl;
}


int main()
{
	test1();

	cin.get();
	return 0;
	
}