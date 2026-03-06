#include<iostream>
using namespace std;

//深拷贝：简单的赋值拷贝操作
//浅拷贝：在堆区重新申请空间，进行拷贝操作

class Person
{
public:
	Person()
	{
		cout << "无参构造函数" << endl;
	}
	Person(int a, int h)
	{
		height = new int(h);//指针接收堆区数据
		age = a;
		cout << "有参构造函数" << endl;
	}

	//Person(const Person& p)///！！！！浅拷贝
	//{
	//	cout << "浅拷贝构造函数" << endl;
	//	age = p.age;
	//}

	Person(const Person& p)
	{
		cout << "深拷贝构造函数" << endl;
		age = p.age;
		height = new int(*p.height);//在堆区开辟新内存拷贝指针指向的堆区内存
	}


	~Person()//析构代码，将堆区开辟的数据做释放
	{
		if (height != NULL)
		{
			//delete会释放指针所指向的堆区内存
			delete height;///////！！！！！！删两次，内存却只有一个数据，浅拷贝会报错
			height = NULL;

		}
		cout << "析构函数" << endl;
	}

	int age=0;
	int* height=0;//局部变量
};

void test01()
{
	Person p1(18,160);
	cout << "p1年龄：" << p1.age << " p1身高：" << *p1.height << endl;

	Person p2(p1);
	cout << "p1年龄：" << p2.age << " p2身高：" << *p2.height << endl;
}

int main()
{ 
	test01();

	cin.get();
	return 0;
}