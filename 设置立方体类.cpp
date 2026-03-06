#include<iostream>
using namespace std;

class Cube
{
public:
	double m_L;
	double m_W;
	double m_H;

	double Area()
	{
		double area = 0;
		area = (m_L * m_W + m_L * m_H + m_W * m_H) * 2;
		return area;
	}
	
	double Volume()
	{
		double volume = 0;
		volume = m_L * m_W * m_H;
		return volume;
	}

	bool isSname(Cube &c)//这里只有一个形参，因为使用函数时会被一个对象调用
	{
		if (m_L == c.m_L && m_W == c.m_W && m_H == c.m_H)
		//if (m_L == c.m_L && m_W == c.m_W && m_H == c.m_H);//若这个分号存在，则表明这是一个空语句，不执行
		{
			return true;
		}
		return false;
	}
};

/*对比是否相等
bool isSname(Cube& c1, Cube& c2)
{
	if (c1.m_H == c2.m_H)
	{
		if (c1.m_L == c2.m_L)
		{
			if(c1.m_W==c2.m_W)
		}
	}else
	{
		c1.m_H=c2.m_L
	return true;
	}

	return false;
}*/

int main()
{
	Cube c1;
	c1.m_H = 1.3;
	c1.m_W = 2.4;
	c1.m_L = 3;
	cout << "area:" << c1.Area() << endl;
	cout << "volume:" << c1.Volume() << endl;

	Cube c2;
	c2.m_H = 3;
	c2.m_W = 1.3;
	c2.m_L = 0.4;
	cout << "area:" << c2.Area() << endl;
	cout << "volume:" << c2.Volume() << endl;

	bool ret=c1.isSname(c2);//利用成员函数判断
	cout << ret << endl;

	cin.get();
	return 0;
}