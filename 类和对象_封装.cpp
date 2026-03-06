#include<iostream>
using namespace std;

const double PI = 3.14;
//设计圆类——class 名称
class Circle
{
	
public://访问权限

	//属性和行为统称成员
	//属性，成员属性，成员变量
	int m_r;//半径
	//行为，成员函数，成员方法
	double calculate()//获取周长
	{
		return 2 * PI * m_r;
	}

};

int main()
{
	//实例化：通过圆类 创建具体的圆（对象）
	Circle c1;
	c1.m_r = 10;
	cout << "c1周长" << c1.calculate() << endl;

	cin.get();
	return 0;
}