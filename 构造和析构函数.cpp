#include<iostream>
using namespace std;


class Person
{
//1.构造函数，初始化
//没有返回值不写void/函数名与类名相同/可有参数，发生重载/创建对象时自动调用一次
//分类1：按照参数分类，有参构造，无参构造
//分类2：按照类型分类		普通构造  拷贝构造
//调用原则
//1.如果用户定义有参构造函数。c++不提供无参构造，但会提供默认拷贝构造
//2.如果用户定义拷贝构造函数，c++不会再提供其他构造函数
public:
	//分类2，1.普通构造
	Person()//分类1：1无参/默认构造
	{
		cout << "无参构造函数" << endl;
	}
	Person(int a)//分类1，2有参构造
	{
		age = a;
		cout << "有参构造函数" << endl;
	}
	//分类2，2.拷贝构造
	Person(const Person &p)
	{
		cout << "拷贝构造函数" << endl;
		age = p.age;
	}

//2.析构函数，清理
//没有返回值不写void/函数名与类名相同，前加~/不可有参数，不发生重载/销毁对象前自动调用一次
	~Person()
	{
		cout << "析构函数" << endl;
	}


	int age=0;

};

//拷贝构造函数使用场景
void test01()//1.使用一个已经创建完毕的对象来初始化一个新对象
{
	Person p1(20);
	Person p2(p1);
}
void doWork(Person p)//2.值传递的方式给函数参数传值
{

}
void test02()//输出拷贝是因为，这个过程相当于隐式转换法Person p=p1;
{
	Person p;
	doWork(p);
}
Person doWork2()//3.值返回方式返回局部对象
{
	Person p1;
	cout << "&p1" << (int*)&p1 << endl;
	return p1;
}
void test03()
{
	Person p = doWork2();//相当于显示法 Person p=Person(p1)
	cout << "&p" << (int*)&p << endl;
}

/*
void test()
{
	//Person p;//局部变量，栈区，test01执行完自动释放

	//构造函数的调用
	//1.括号法
	//Person p1;//默认构造调用。  不加小括号，编译器会以为是函数声明
	//Person p2(10);//有参构造调用
	//Person p3(p2);//拷贝调用
	//cout << p3.age << endl;
	
	//2.显示法
	Person p1;
	Person p2 = Person(10);//Person(10)是匿名对象，函数完成前，此行执行后就回收，
	Person p3 = Person(p2);
	//Person（p3)；//不要利用拷贝函数初始化匿名对象，会被认为==Person p3,这是对p3重定义

	//3.隐式转换法
	Person p4 = 10;//相当于 Person p4 = Person(10);有参构造
	Person p5 = p4;
}
*/

int main()
{
	//test();
	//Person p;//写在这里无析构是因为主函数没执行完，停在cin.get

	//test();
	
	//test01();
	//test02();
	test03();

	cin.get();

	return 0;
}