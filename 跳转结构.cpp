#include<iostream>
using namespace std;

int main() {

	//1.break
	// switch终止case跳出switch
	// 循环：跳出当前循环语句
	// 嵌套：跳出最近的内层循环语句
	//出现在switch
	/*int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "普通" << endl;
		break;
	case 2:
		cout << "一般" << endl;
		break;
	default:
		break;
	}*/

	//2.continue
	//跳过本次循环尚未执行的语句。继续执行下一次循环
	/*for (int i = 0; i <= 50; i++)
	{
		if (i % 2 == 0)
		{
			continue;//执行到此不继续，直接进行下一次循环
		}
		cout << i << " ";
	}
	*/


	//goto语句
	//如果标记的名称存在，执行到goto语句时，
	/*
	cout << "111111" << endl;
	goto FLAG;
	cout << "22222" << endl;
	cout << "33333" << endl;
	FLAG:
	cout << "444444" << endl;
	*/

	system("pause");
	return 0;
}