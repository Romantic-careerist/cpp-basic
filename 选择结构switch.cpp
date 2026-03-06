#include<iostream>
using namespace std;
int main() {

	//给电影打分
	int score = 0;
	cin >> score;//用户输入分数

	switch (score) //只能是整形或是字符型，不可以是区间
	{
	case 10:
		cout << "sss" << endl;
		break;//退出switch,不再向下
	case 9:
		cout << "ss" << endl;
		break;
	case 8:
		//。。。。。
	default:
		cout << "未达标" << endl;
		break;
	}










	system("pause");

	return 0;
}