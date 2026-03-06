#include<iostream>
using namespace std;

int& func(int& ref)//发现是引用，转换为int*const ref=&a
{
	ref = 100;//发现ref是引用，自动转换为*ref=100;
	return ref;
}

void show(const int& val)
{
	//val = 1000;//防止误操作
	cout << "val" << val << endl;
}


int main()
{
	int a = 10;

	int& ref = a;//自动转换为int*const ref=&a
	
	//即指针常量，可改值不可改地址,引用的本质

	ref = 20;//内部发现ref是引用，自动转换为*ref=20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	//cout<<func(a);

	//int& ref2 = 10;//引用必须引一块合法的内存空间

	const int& ref2 = 10;//+const变成const int temp=10;int&ref2=temp;
	//ref2 = 20;//const只读不可修改

	int a = 100;
	show(a);




	cin.get();
	return 0;
}