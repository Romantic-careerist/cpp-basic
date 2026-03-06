#include<iostream>
using namespace std;

/*
	返回值类型 函数名（参数列表）
	{
		函数语句
		return表达式

		//其中返回值类型即为数据类型
	}
	*/

int add(int num1, int num2);//add函数在main之后，必须有函数声明

int main()
{
	

	int a = 1;
	int b = 2;
	//int c= add(a, b);//实参
	cout << add(a, b) << endl;

	cin.get();
	return 0;
}
int add(int num1, int num2)//形参
{
	int a = 0;
	a = num1 + num2;
	return a;
}


