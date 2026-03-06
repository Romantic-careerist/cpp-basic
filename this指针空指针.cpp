#include<iostream>
using namespace std;

//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指向被调用的成员函数所属的对象
//		this->age = age;
//	}
//
//	Person& PersonAddAge(Person &p)
//	//必须返回引用&，若去掉复制新对象，原对象不变
//	{
//		this->age += p.age;
//		return *this;
//	}
//
//	int age;
//};

//void test()//this1.解决名称冲突
//{
//	Person p1(18);
//	cout << "p1年龄：" << p1.age << endl;
//}
//void test2()//this2.返回对象本身用*this
//{
//	Person p1(10);
//	Person p2(10);
//
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2年龄：" << p2.age << endl;
//}

class Person
{
public:

	void showClassName()
	{
		cout << "this is person class" << endl;
	}
	void showPersonAge()
	{
		if (this == NULL)//提高代码健壮性，否则若传入指针为空会报错，
		{
			return;
		}
		cout << "age" << m_Age << endl;
	}

	int m_Age;
};
void test()
{
	Person* p = NULL;//允许空指针调用成员函数
	p->showClassName();
	p->showPersonAge();
}


int main()
{
	test();
	//test2();

	cin.get();
	return 0;
}