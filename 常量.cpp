//1.#define 常量名 常量值   宏常量
//2.const修饰的变量：cosnt 数据类型 常量名=常量值
#include<iostream>
using namespace std;

#define Day 7
int main() {

	//Day = 14;//错误宏常量不可修改
	cout << "一周总共有：" << Day << "天" << endl;

	//2、
	const int month = 12;
	//month = 24;//错误，常量不可修改

	cout << "一年总共有：" << month<<"个月份"<<endl;

	system("pause");

	return 0;
}