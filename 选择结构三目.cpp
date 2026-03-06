#include<iostream>
using namespace std;

int main() {
	//表达式1？表达式2：表达式3
	//若1为真，执行2，返回2；若1为假，执行3，返回3
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "c=" << c << endl;//20__先执行a>b,10!>20,返回b,20
	
	//c++中三木运算返回的是变量，而不只是值
	(a > b ? a : b) = 100;//返回b=100
	cout << "b= " << b << endl;//100


	system("pause");

	return 0;
}