#include<iostream>
using namespace std;
//引用做函数返回值
//1.不要返回局部变量的引用
int& test01()
{
	int a = 10;//栈区，局部变量
	return a;//error
}
//2.函数的调用可以作为左值
int& test02()
{
	static int a = 10;//全局区 静态变量
	return a;
}

int main()
{
	int& ref = test01();
	//cout << "ref=" << ref << endl;//第一次保留
	//cout << "ref=" << ref << endl;

	int& ref2 = test02();
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	 
	//如果函数返回值是引用，函数调用可作为左值
	test02() = 1000;//即a=1000,ref2是a的别名，也随之改变
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;


	cin.get();
	return 0;
}