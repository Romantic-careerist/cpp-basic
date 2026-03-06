#include<iostream>
using namespace std;
//#include<string>

int main()
{
	//二维数组定义
	//数据类型 数组名[行数][列数];arr[0][0]=1;
	//数据类型 数组名[行数][列数]={{数据1，数据2}，{数据3，数据4}};
	//数据类型 数组名[行数][列数]={数据1，数据2，数据3，数据4};
	//数据类型 数组名[][列数]={数据1，数据2，数据3，数据4};

	int arr[][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "arr占用内存空间为： " << sizeof(arr) << endl;
	cout << "arr第一行占用内存空间为： " << sizeof(arr[0]) << endl;
	//cout << "arr第一列占用内存空间为： " << sizeof(arr[][0]) << endl;
	cout << "二维数组的列数为:" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	cout << "二维数组的行数为:" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的首地址为:" << arr << endl;//默认十六进制
	cout << "二维数组的首地址为:" << (int)arr << endl;//强转十进制
	//？？？(int)arr试图将数组的首地址转换为一个整数类型。这种做法在现代C++中是不推荐的，
	// 因为指针和整数之间的转换是未定义行为，且在64位系统上尤其危险，
	// 因为指针的大小通常是64位，而int通常是32位。
	// 正确的做法是使用reinterpret_cast将指针转换为uintptr_t或intptr_t类型，
	// 这些类型在<cstddef>头文件中定义，专门用于存储指针的整数表示

	cout << "二维数组第一行的首地址为:" << (int)arr[0] << endl;
	cout << "二维数组第二行的首地址为:" << (int)arr[1] << endl;

	int a = sizeof(arr) /sizeof(arr[0][0])/3;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	//案例——成绩统计
	int arr1[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "张三","李四","王五" };//定义字符串

	for (int i = 0; i < 3; i++)
	{
		int num = 0;
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << " \t";
			num = num + arr1[i][j];
		}
		cout <<names[i]<< "总：" << num;
		cout << endl;
	}




	cin.get();
	return 0;
}