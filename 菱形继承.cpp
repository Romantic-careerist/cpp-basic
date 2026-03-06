#include<iostream>
using namespace std;

class Animal 
{
public:
	int m_Age;
};

//利用虚继承 解决菱形继承的问题
// //继承之前 加上关键字 virtua1 变为虚继承
// //Animal类称为 虚基类 
//？？？？？？？？？？？？？ 虚基类指针 虚基类列表
//羊
class Sheep: virtual public Animal{};
//驼
class Camel:virtual public Animal{};
//羊驼 //羊驼只需一份年龄，菱形继承两份数据 资源浪费
class Alpaca :public Sheep, public Camel
{
};

void test01()
{
	Alpaca al;
	al.Sheep::m_Age = 18;
	al.Camel::m_Age = 20;
	//菱形继承 二义性 加作用域
	cout << "al.sheep::m_age=" << al.Sheep::m_Age << endl;
	cout << "al.camel::m_age=" << al.Camel::m_Age << endl;
	

}
int main()
{
	test01();

	cin.get();
	return 0;
}