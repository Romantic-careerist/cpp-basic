#include<iostream>
using namespace std;

class Student
{
public://公共权限
	string name;
	int stu_id=0;
protected://保护权限
	string car;
private://私有权限
	int password=0;
public:
	void show()//行为，展示姓名学号
	{
		car = "奔驰";
		password = 123456;
		cout << "姓名：" << name <<" 学号："<<stu_id
			<<" car: "<<car<<" password: "<<password << endl;
	}

	void getname(string sname)
	{
		name = sname;
	}

};

class C1
{
	int m_A;//默认为私有
};

struct C2
{
	int m_A;//默认为公共

};

int main()
{
	Student s1;
	//s1.name = "baby";
	s1.getname("张三");
	s1.stu_id = 1327;
	//s1.car = "奔驰";//protect权限，类外不可
	//s1.password = 123456;//private权限，类外不可

	s1.show();

	Student s2;
	s2.name = "lisi";
	s2.stu_id = 1328;
	s2.show();

	/*
	C1 c1;
	c1.m_A = 100;//class私有
	*/
	C2 c2;
	c2.m_A = 100;
	

	cin.get();
	return 0;
}