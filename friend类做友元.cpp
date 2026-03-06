#include<iostream>
using namespace std;

class Building;
class GoodGay//2.类做友元
{
public:
	GoodGay();

	void visit();//参观函数，访问building中的属性
	Building* building;
};

class Building
{
	friend class GoodGay;//2.类做友元
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

void GoodGay::visit()
{
	cout << "GoodGay正访问：" << building->m_SittingRoom << endl;
	cout << "GoodGay正访问：" << building->m_BedRoom << endl;
}
void test1()
{
	GoodGay gg;
	gg.visit();

}

int main()
{
	test1();

	cin.get();
	return 0;
}