#include<iostream>
using namespace std;

int main() {

	int a = 10;
	a += 2;
	cout << "a= " << a << endl;//12

	a -= 2;
	cout << "a= " << a << endl;//10

	a *= 2;
	cout << "a= " << a << endl;//20

	a /= 2;
	cout << "a= " << a << endl;//10

	a %= 2;//模等于
	cout << "a= " << a << endl;//0

	//比较运算符
	a = 10;
	int b = 20;
	cout << (a == b) << endl;//0为假
	cout << (a != b) << endl;//1为真
	cout << (a > b) << endl;
	cout << (a <b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;

	//逻辑运算符
	a = 0;
	cout << (a && b) << endl;//逻辑与，同真为真，其余为假
	cout << !a << endl;//非
	cout << (a || b) << endl;//逻辑或，同假为假




	system("pause");

	return 0;
}