#include<iostream>
using namespace std;

int main() {

	/*int i = 0;
	while (i < 10) {//括号内满足循环条件
		//若括号内为1代表真，死循环
		cout << i << endl;

		i++;
	}
	*/

	/*
	//time系统头文件->
	//#include<ctime>
	//添加随机种子，利用当前时间
	srand((unsigned int)time(NULL));

	//猜数字游戏
		//系统生成随机数函数！！！积累
	int random = rand() % 100 + 1;//生成数区间0~99，若%100+1为1~100
	cout << random << endl;

	int input = 0;
	cout << "猜数字" << endl;
	cin >> input;

	while (input != random) {//或者使用whiile(1)+break
		if (input > random) {
			cout << "猜大了" << endl;
		}else {
			cout << "猜小了" << endl;
		}

		cout << "猜数字" << endl;
		cin >> input;
	}

	cout << "success" << endl;
	*/

	/*
	int i = 0;
	do {
		cout << i << endl;
		i++;
	} while (i<10);
	*/

	//水仙花数
	/*int i = 100;
	int h = 0;
	do {

		h = i;
		int one = h / 100;
		int a = one * one * one;
		h = h %100;
		int two = h / 10;
		int b = two * two * two;
		int three = h % 10;
		int c = three * three * three;

		int sum = a + b + c;
		if (sum == i) {
			cout << i << endl;
		}
		i++;

	} while (i<1000);
	*/

	int num = 100;
	do {
		int a = 0;
		int b = 0;
		int c = 0;
		a = num % 10;//个位
		b = num / 10 % 10;//十位
		c = num / 100;//百位
		if(a* a* a + b * b * b + c * c * c == num){
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	



	system("pause");

	return 0;
}