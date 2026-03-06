#include<iostream>
using namespace std;

//1.无参数无返回值
void test01()
{
	cout << "hello world" << endl;
}
//2.有参数无返回值
void test02(int a)
{
	cout << "this is 02:" << a << endl;
}
//3.无参数有返回值
int test03()
{
	cout << "this is03 " << endl;
	return 1000;
}

//4.有参数有返回值
int test04(int a)
{
	cout << "this is 04 " << a << endl;
	return a;
}

int main()
{
	//函数调用
	test01();

	test02(100);
	
	cout << test03() << endl;

	cout<<test04(10000);

	cin.get();
	return 0;
}