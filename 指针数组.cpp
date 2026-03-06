#include<iostream>
using namespace std;

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "第一个元素" << arr[0] << endl;

	int* p = arr;//arr是数组首元素	
	//?为什么不加&——是因为数组名本身就代表了首元素的地址
	//int*p=arr[0]//error,类型错误，不能将一个 int 值直接赋给一个 int* 类型的指针

	cout << "*p第一个数组元素" << *p << endl;

	p++;//向后偏移4字节
	cout << "*p第二个" << *p << endl;

	//指针遍历数组
	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		//cout << arr[i] << endl;
		cout << *p2 << endl;
		p2++;
	}

	cin.get();
	return 0;
}