#include<iostream>
using namespace std;

class Building;
class GoodGay//2.类做友元
{
public:
	GoodGay();

	void visit1();//参观函数，可访问building中的私有属性
	void visit2();//不可访问building中的私有属性
	Building* building;
};

class Building
{
	friend void GoodGay::visit1();//GoodGay类下的visit成员函数做友元
public:
	Building();

	string m_SittingRoom;

private:
	string m_BedRoom;
};

Building::Building()//类外成员函数
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
GoodGay::GoodGay()
{
	building = new Building;//堆区创建建筑物对象
}

void GoodGay::visit1()
{
	cout << "GoodGay正访问：" << building->m_SittingRoom << endl;
	cout << "GoodGay正访问：" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{

	cout << "GoodGay正访问：" << building->m_SittingRoom << endl;
	//cout << "GoodGay正访问：" << building->m_BedRoom << endl;
}
void test1()
{
	GoodGay gg;
	gg.visit1();
	gg.visit2();
}

int main()
{
	test1();

	cin.get();
	return 0;
}