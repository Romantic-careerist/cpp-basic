#include<iostream>
using namespace std;

void myswap(int a,int b)//值传递,形参
{
	int temp = a;
	a = b;
	b = temp;

}

void myswap1(int* a, int* b)//地址传递
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void myswap2(int& a, int& b)//引用传递
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int d = 10;
	int e = 20;
	myswap(d, e);//实参
	cout << "d"<<d<<" e" << e << endl;//值传递，形参不会修饰实参
	myswap1(&d, &e);
	cout << "d" << d << " e" << e << endl;//地址传递，形参会修饰实参
	myswap2(d, e);
	cout << "d" << d << " e" << e << endl;//引用传递，形参会修饰实参

	int a = 10;
	//引用：给变量起别名//引用地址等于变量地址，指针地址不等于变量地址
	//数据类型 &别名=原名
	int& b = a;//1.别名引用必须初始化存在
	cout << a << b << endl;
	b = 20;
	cout << a << endl;
	int c = 30;
	//int& b = c;//已经初始化过，不可更改为别人的别名
	b = c;//这不是更改引用，这是赋值

	int main();
	return 0;
}