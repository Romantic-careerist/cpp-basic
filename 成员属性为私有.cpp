#include<iostream>
using namespace std;

//成员属性设置私有
//1.可以司机控制读写权限
//2.对于写可以监测数据有效性

class Person
{
public:
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "年龄输入有误，赋值失败" << endl;
		}
		else {
			m_Age = age;
		}

	}
	int getm_Age()
	{
		return m_Age;
	}

	void setIdol(string idol)
	{
		m_Idol = idol;
	}
private:
	string m_Name;//可读可写
	int m_Age=18;//只读
	string m_Idol;//只写

};


int main()
{
	Person p;
	p.setName("张三");//可写
	cout << "姓名：" << p.getName() << endl;//可读

	p.setAge(151);
	cout << "年龄：" << p.getm_Age() << endl;//只读

	p.setIdol("天真");//只写
	//cout << "爱豆：" << p.setIdol() << endl;

	cin.get();
	return 0;
}