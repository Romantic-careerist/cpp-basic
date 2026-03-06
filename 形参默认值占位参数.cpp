#include<iostream>
using namespace std;

//1.函数默认参数(形参=默认值)
//若前一个形参已有默认值，往后都必须有，若a有，b,c也必须有

int func(int a, int b, int c=30)//函数实现
{
	return a + b + c;

}
//int func(int a, int b, int c = 30);//函数声明，重定义了c默认参数
//若声明有，则实现不可有默认参数，反之同理，不可重定义同一个形参默认参数


//2.占位参数
void func1(int a,int=10)//占位参数，也可有默认参数
{

	cout << "this is func1a" << endl;
}
//3.函数重载，函数名相同，提高复用性
// 同一作用域（目前都为全局函数，可以满足），函数名可以相同，参数类型、个数、顺序不同

void func1(double a)
{
	cout << "this is func1 double" << endl;
}

		/*int func1(double a)//函数返回值不同不可作为函数重载的条件
		{
			cout << "this is func1 double" << endl;
		}*/
	//注意**1.函数引用可以作为重载条件,
	void func2(const int& a)//const int&a=10,合法
	{
		cout << "func const int &a" << endl;
	}
	void func2(int& a)//int& a = 10, 不合法
	{
		cout << "func int &a" << endl;
	}
	//注意**2.函数重载碰到默认参数，，所以重载时尽量别写默认参数
	void func1(int a)
	{

		cout << "this is func1a" << endl;
	}

int main()
{
	int sum = func(10,30);
	cout << sum << endl;

	func1(10,10);//参数不同，可分辨
	//func1();
	func1(1.1);

	int a = 10;
	func2(a);//a本身是变量，不是const
	func2(10);//常量为const

	func1(10);//因为第一个有默认参数，会混淆

	cin.get();
	return 0;

}