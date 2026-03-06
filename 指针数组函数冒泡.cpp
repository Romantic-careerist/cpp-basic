#include<iostream>
using namespace std;

void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			cout << arr[j] << " ";
		}
		cout << endl;
	}//int* p = arr; 
	//即int* p; p = arr; arr代表数组地址也是首元素地址p存放数组arr的地址 p可以跟arr一样使用下标访问数组arr的元素, p[1] = arr[1] 代表数组第二个元素
}

void printArray(int* arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	int len = sizeof(arr) / sizeof(arr[0]);
	
	bubbleSort(arr, len);
	printArray(arr, len);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	cin.get();
	return 0;
}