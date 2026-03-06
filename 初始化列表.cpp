#include<iostream>
using namespace std;

class Person
{
public:
	//传统初始化
	//Person(int a, int b, int c)
	//{
	//	A = a;
	//	B = b;
	//	C = c;
	//}l

	//初始化列表
	Person(int a, int b, int c) :A(10), B(20), C(30)
	{

	}

	int A;
	int B;
	int C;
};

void test()
{
	//Person p(10, 20, 30);
	Person p(30,20,10);
	cout << "A:" << p.A << endl;
	cout << "B:" << p.B << endl;
	cout << "C:" << p.C << endl;
}


int main()
{
	test();

	cin.get();
	return 0;
}