#include<iostream>
using namespace std;
int main()
{
	//数组
	//每个数据元素的数据类型都相同，由连续的内存位置组成
	//下标从零开始索引
	//初始化数组没有填完，剩余元素用0补全

	//定义
	//1.数据类型 数组名[数组长度]；
	//2.数据类型 数组名[数组长度]={值1，值2，......};
	//3.数据类型 数组名[ ]={值1，值2，.....};
	
	//arr=0;数组名已经指向一个地址不可赋值
	/*int arr[5] = {1,20,30,40,};
	arr[0] = 10;
	//cout << arr[4] << endl;//0
	//遍历数组
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	int arr3[] = {1,2,3,4 };
	for (int j = 0; j < 4; j++)
	{
		cout << arr3[j] << endl;
	}

	//一维数组/数组名 ————作用
	//sizeof(arr)统计整个数组在内存中的长度；sizeof(arr[0])
	 cout << "整个数组占用空间" << sizeof(arr) << endl;
	 cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
	 cout << "数组中元素个数为 " << sizeof(arr) / sizeof(arr[0]) << endl;
	//获取数组在内存中的首地址
	 cout << arr << endl;//数组名本身在大多数情况下会衰减为指向数组第一个元素的指针
	 //输出的是指针（退化后的指针）的值，即数组首元素的地址，以默认的指针输出格式显示。
	cout <<"数组首地址"<< (int*)arr << endl;
	//输出的是将指针强制转换为int类型后的整数值，即数组首元素的地址以整数形式显示
	cout << "第一个元素地址" << (int*)arr << endl;

	cout << "第二个元素地址" << (int)&arr[1] << endl;
	cout << "第二个元素地址" << (int)&arr[2] << endl;
	*/

	//找数组极值
	int arr2[] = {300,350,200,400,250};
	int max = 0;
	int a = 0;
	for (int i = 0; i < 5; i++)
	{
		
		//max = arr2[i];
		if (arr2[i] > max) {
			max = arr2[i];
			a = i+1;
		}
	}
	cout << "最终的小猪是" << a << "体重为：" << max << endl;

	//逆序输出
	int arr3[] = { 1,2,3,4,5 };
	/*方法1
	int arr4[5];
	int i = 0;
	int j = 4;
	do {
		arr4[j] = arr3[i];
		j--;
		i++;
	
	} while (i < 5);
	cout << j << endl;

	for (j=0; j < 5; j++)
	{
		cout << arr4[j] << endl;
	}
	*/

	/*方法2下标交替*/
	int start = 0;
	int end = sizeof(arr3) / sizeof(arr3[0]) - 1;
	while (start < end)
	{
		int temp = arr3[start];
		arr3[start] = arr3[end];
		arr3[end] = temp;

		start++;
		end--;
	}
	for (int j = 0; j < 5; j++)
	{
		cout << arr3[j] << endl;
	}





	system("pause");
	return 0;
}