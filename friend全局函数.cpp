#include<iostream>
using namespace std;

class Building
{
	
	//1.全局函数做友元goodgay是Building类的好朋友，可以访问私有内容
	friend void goodgay(Building* building);//全局函数声明
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
	string m_SittingRoom;

private:
	string m_BedRoom;
};


void goodgay(Building* building)
{
	cout << "好基友全局函数：" << building->m_SittingRoom << endl;
	cout << "好基友全局函数：" << building->m_BedRoom << endl;
}

void test1()
{
	Building building;
	goodgay(&building);
}

int main()
{

	test1();
	cin.get();
	return 0;
}