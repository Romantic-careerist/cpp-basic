#include<iostream>
using namespace std;

//制作饮品父类
class AbstractDrinking
{
public:
	virtual void Drink() = 0;
	virtual void Boil() = 0;//煮水
	virtual void Brew() = 0;//冲泡
	virtual void PourInCup() = 0;//倒入杯中
	virtual void PutSomething() = 0;//加入辅料
	void makeDring()
	{
		Drink();
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee :public AbstractDrinking
{
public:
	void Drink()
	{
		cout << "make coffee" << endl;
	}
	virtual void Boil()//煮水
	{
		cout << "煮农夫山泉" << endl;
	}
	virtual void Brew()//冲泡
	{
		cout << "冲泡咖啡" << endl;
	}
	virtual void PourInCup()//倒入杯中
	{
		cout << "装杯" << endl;
	}
	virtual void PutSomething()
	{
		cout << "加入糖和牛奶" << endl;
	}
};

class Tea :public AbstractDrinking
{
public:
	void Drink()
	{
		cout << "make tea" << endl;
	}
	virtual void Boil()//煮水
	{
		cout << "煮怡宝" << endl;
	}
	virtual void Brew()//冲泡
	{
		cout << "冲泡茶叶" << endl;
	}
	virtual void PourInCup()//倒入杯中
	{
		cout << "装杯" << endl;
	}
	virtual void PutSomething()
	{
		cout << "加入枸杞" << endl;
	}
};

void doWork(AbstractDrinking* abs)
{
	abs->makeDring();
	delete abs;
}
void test01()
{
	doWork(new Coffee);

	cout << "-----------------------" << endl;

	doWork(new Tea);
}
int main()
{
	test01();
	cin.get();
	return 0;
}