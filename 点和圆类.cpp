#include<iostream>
using namespace std;
#include"point.h"
#include"circle.h"


//class Point//点坐标
//{
//public:
//	void setX(int x)//设置x
//	{
//		m_x = x;
//	}
//	int getX()//获取x
//	{
//		return m_x;
//	}
//	void setY(int y)//设置Y
//	{
//		m_y = y;
//	}
//	int getY()//获取y
//	{
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//};

//class Circle//圆类
//{
//public:
//	void setR(int r)
//	{
//		m_r = r;
//	}
//	int getR()
//	{
//		return m_r;
//	}
//
//	void setCenter(Point center)
//	{
//		m_center = center;
//	}
//	Point getCenter()
//	{
//		return m_center;
//	}
//
//private:
//	int m_r;
//	Point m_center;//可以让另一个类作为本类成员
//
//};

void isInCircle(Circle &c,Point &p)//判断点圆关系
{
	int distance=//两点距离=根号下(x1-x2)^2+(y1-y2)^2
	(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	cout << distance << endl;

	int rDistance = c.getR() * c.getR();//r^2
	cout << rDistance << endl;

	if (distance == rDistance) {
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance) {
		cout << "点在圆外" << endl;
	}
	else  {
		cout << "点在圆内" << endl;
	}
}


int main()
{
	Circle c1;//创建圆
	c1.setR(2);
	cout << "半径" << c1.getR() << endl;
	Point cen1;
	cen1.setX(10);
	cen1.setY(0);
	cout << cen1.getX() << " " << cen1.getY() << endl;
	c1.setCenter(cen1);

	Point p1;//创建点
	p1.setX(10);
	p1.setY(21);
	cout << p1.getX() << " " << p1.getY() << endl;

	isInCircle(c1, p1);


	cin.get();
	return 0;
}