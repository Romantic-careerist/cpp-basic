#include<iostream>
using namespace std;

class Phone
{
public:

	Phone(string pName)
	{
		m_Pname = pName;
	}
	~Phone()
	{
		cout << "phone析构函数" << endl;
	}
	string m_Pname;
};

class Person
{
public:
	Person(string name, string pName):m_Name(name), m_Phone(pName)//Phone m_Pname = pName
	{
		//Phone m_Pname = pName,隐式转换法

	}
	~Person()
	{
		cout << "person析构函数" << endl;
	}
	string m_Name;
	Phone m_Phone;
};
//当其他类对象作为本类成员，构造时先构造类对象，再构造自身,析构顺序与构造相反
void test()
{
	Person p("张三", "苹果");
	cout << "name: " << p.m_Name << "phone: " << p.m_Phone.m_Pname << endl;
}

int main()
{
	test();

	cin.get();
	return 0;
}