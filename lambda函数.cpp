#include<iostream>
using namespace std;

/*lambda匿名函数
[capture clause](Parameters)->return_type
{[捕获列表]（参数列表） 返回类型 
	函数体
}*/

/*
int add(int a, int b)
{
	return a + b;
}*/

int main()
{
	int x = 10;
	int y = 20;

	auto add=[](int a, int b)->int {
		return a + b;
	};

	int ret = add(x, y);

	cout << ret;

	cin.get();
	return 0;
}