#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);
	}

	//默认浅拷贝，p1p2重复删除数据会报错
	/*~Person()//析构函数
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}*/

	//重载 赋值运算符
	Person& operator=(Person& p)
	{
		//编译器默认提供浅拷贝
		//m_Age=p.m_Age;

		//先判断是否有属性在堆区，如果有先释放干净，再深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		m_Age = new int(*p.m_Age);//深拷贝

		return *this;
	}

	int *m_Age;

};

void test01()
{
	Person p1(18);
	cout << "p1年龄： " << *p1.m_Age << endl;
	Person p2(20);
	cout << "p2年龄： " << *p2.m_Age << endl;
	Person p3(30);
	p3 = p2 = p1;
	cout << "p2年龄： " << *p2.m_Age << endl;
	cout << "p3年龄： " << *p3.m_Age << endl;
}


int main()
{
	test01();
	int a = 10;
	int b = 20;
	int c = 30;
	c = b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	cin.get();
	return 0;
}