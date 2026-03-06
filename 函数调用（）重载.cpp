#include<iostream>
using namespace std;

//函数调用运算符（）重载，即仿函数
class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myPrint;
	myPrint("hello world");//仿函数->在一个类中重载（）
	MyPrint02("你好世界");//函数
}

class MyAdd

{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	MyAdd myadd;
	int ret = myadd(100, 100);//仿函数很灵活没有固定写法
	cout << "ret=" << ret << endl;

	//匿名函数对象
	//C++中创建匿名临时对象必须使用类名()（即调用构造函数）。后续的(参数)是调用该对象的operator()
	/*传统仿函数   类名()(参数)   MyAdd()(100, 100)
	C++11风格	类名{}(参数)		MyAdd{}(100, 100)
	最简匿名函数 Lambda调用[](a, b) {return a + b;}(100, 100)*/
	cout << MyAdd{}(100, 100) << endl;
	
}

int main()
{
	//test01();
	test02();

	cin.get();
	return 0;
}