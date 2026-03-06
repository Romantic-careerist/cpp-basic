#include<iostream>
using namespace std;

//地址传递
void swap(int* p1, int* p2)
{
	//是*p,交换了指针所指地址上的数据
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

int main()
{


	int a = 10;
	int b = 20;

	swap(&a, &b);

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	cin.get();
	return 0;

}