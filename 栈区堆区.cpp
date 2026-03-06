#include<iostream>
using namespace std;

/*int* space()
{

	int a = 0;
	return &a;//栈区
}*/

int* func()
{
	//1.利用new关键字，在堆区创建整型数据，new返回的是该数据类型的指针
	//指针本质也是局部变量，放在栈上，保存的数据放在堆区
	int* p = new int(10);
	return p;
}

void teat()
{
	//2.new在堆区创建整型数组
	int*arr=new int[10];
	
	for (int i = 0; i < 10; i++)//赋值
	{
		arr[i] = i + 100;
	}

	for (int j = 0; j < 10; j++)
	{
		cout << arr[j] << endl;
	}
	delete[]arr;//释放堆区数组

}



int main()
{
	int c = 0;
	int* b = &c;
	cout << *b << endl;
	cout << *b << endl;// 局部变量的生命周期在函数返回时结束。
	//只要 main() 函数没有结束，变量 c 的生命周期就还在继续，因此指针 b 持有的地址是有效的


	int* p = func();
	//int* p = space();//仅在第一次保留
	cout << * p << endl;//局部变量的地址不可访问
	cout << * p << endl;
	cout << *p << endl;
	cout << *p << endl;//堆区数据，由程序员管理释放，用关键字delete
	delete p;
	//cout << *p << endl;//已经释放，再访问就是非法操作


	teat();

	
	cin.get();
	return 0;
}