#include<iostream>
using namespace std;

int main() {
	//c/c++三种程序运行结构：顺序结构，选择结构，循环结构


	int score = 0;
	cout << "输入分数" << endl;
	cin >> score;
	cout << "您输入score为" << score << endl;

	//单行格式if语句
	/*if (score > 600)
	{
		cout << "你是天才" << endl;
	}
	*/

	/*多行格式语句
	if (score > 600)
	{
		cout << "成功" << endl;
	}else {
		cout << "马上成功" << endl;
	}
	*/

	//多条件if语句
	/*
	if (score>600) {
		cout << "一本" << endl;
	}
	else if (score > 400) {
		cout << "二本" << endl;
	}else if(score>300){
		cout << "民办二本" << endl;
	}
	else {
		cout << "成为老板" << endl;
	}*/

	//	嵌套if语句
	if (score > 600) {
		if (score > 700) {
			cout << "清华" << endl;
		}
		else if (score > 650) {
			cout << "北大" << endl;
		}
		else {
			cout << "人大" << endl;
		}
	}





	system("pasue");

	return 0;
}