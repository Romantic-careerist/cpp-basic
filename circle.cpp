#include"circle.h"


//class Circle//圆类
//{
//public:

void Circle::setR(int r)
{
	m_r = r;
}
int Circle::getR()
{
	return m_r;
}

void Circle::setCenter(Point center)
{
	m_center = center;
}
Point Circle::getCenter()
{
	return m_center;
}

//private:
//	int m_r;
//	Point m_center;//可以让另一个类作为本类成员
//
//};
