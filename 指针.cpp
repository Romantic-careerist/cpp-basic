#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int* p;//指针定义
	
	p = &a;//&取址符号
	cout << "a地址" << &a<<endl;
	cout << "p: " << p << endl;
	
	//指针p前加*表示解引用，指针指的地址存放的数据
	*p = 1000;
	cout << "a=" << a << endl;
	cout << "*p= " << *p << endl;

	//指针占用地址,32占4字节，64占8字节
	cout << "sizeof(int*)=" << sizeof(int*) << endl;
	cout << "sizeof(float*)=" << sizeof(float*) << endl;
	cout << "sizeof(double*)=" << sizeof(double*) << endl;
	cout << "sizeof(char*)=" << sizeof(char*) << endl;
	
	/*
	//空指针，
	int * b = NULL;// 初始化指针变量
	//*b = 100;//空指针不可访问，0~125系统占用，

	//野指针：指针变量指向非法的内存空间
	int * c = (int*)0x1100;//强制类型转换0x开头表示16进制
	cout << *c << endl;

	//以上两种都不是我们自己申请的，不可访问
	//当这些错误显示的和老师教的一样，即使是错误，但我依然兴奋
	*/

	//常量指针//！！！const修饰*p（指向地址的数据）
	const int* p1 = &a;
	//*p1 = 20;//error,该指针指向的地址存放的数据不可以改,
	p1 = &b;//true,该指针指向的地址可以改
	
	//指针常量//!!const修饰p(指向地址）
	int* const p2 = &a;
	*p2 = 20;//true
	//p = &b;//error

	const int* const p3 = &a;//即修饰指针，又修饰常量，都不能改


	cin.get();
	return 0;
}
