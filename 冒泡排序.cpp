#include<iostream>
using namespace std;

int main()
{
	//冒泡排序实现升序排列
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "排序前" << endl;
	for (int i = 0;i < 9; i++)
	{
		cout << arr[i] <<" " ;
	}
	cout << endl;

	int num = sizeof(arr) / sizeof(arr[0]);//元素个数
	int a = 0;
	do {
		for (int j = 0; j < num - a-1; j++)
		{
			int t=0;
			if (arr[j] > arr[j + 1]) {
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
			
		}
		for (int b = 0; b < 9; b++)
		{
			cout << arr[b] << " ";
		}
		cout << endl;
		a++;
	} while (a<num-1);
	//排序次数=元素个数-1，a从零开始0-7是八次


	// system("pause");
	cin.get();
	return 0;
}