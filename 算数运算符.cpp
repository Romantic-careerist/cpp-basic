#include<iostream>
using namespace std;

int main() {

	//加减乘除
	int a1 = 10;
	int b1 = 3;
	cout << a1 % b1 << endl;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;

	int a2 = 10;
	int b2 = 20;
	
	cout << a2 / b2 << endl;
	cout << a2 % b2 << endl;//结果为10；

	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl;//除法分母不为零否则报错//

	//小数运算
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl;//结果小数
	//cout << d1 % d2 << endl;//小数不能取余
	


	system("pause");
	return 0;
}