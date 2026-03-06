#include "point.h"
///using namespace point;//暂时还不会熟练调用命名空间

//class Point//点坐标
//{
//public:

void Point::setX(int x)//设置x
{
	m_x = x;
}
int Point::getX()//获取x
{
	return m_x;
}
void Point::setY(int y)//设置Y
{
	m_y = y;
}
int Point::getY()//获取y
{
	return m_y;
}

//private:
//	int m_x;
//	int m_y;
//};