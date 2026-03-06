#include<iostream>
using namespace std;
#include"swap.h"
//使用双引号""表示首先在当前目录查找，而使用尖括号<>表示在标准库路径查找
//创建.h后缀名的头文件
//创建.cpp后缀名的源文件
//头文件写函数的声明
//源文件写函数的定义

int main()
{
	int a = 10; int b = 20;
	swap(a, b);

	cin.get();
	return 0;

}