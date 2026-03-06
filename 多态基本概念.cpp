#include<iostream>
using namespace std;

class Animal
{
public:
	//虚函数
	virtual void speak()
	//只有非静态成员变量存储于类，静态函数和成员，非静态函数都不存储于类
	//void speak()
	{
		cout << "动物在说话" << endl;
	}
};
class Cat :public Animal
{
public:
	//函数重写： 函数返回值类型、函数名、参数列表完全相同
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
//执行说话的函数
//动物说话。地址早绑定 编译阶段确定函数地址 静态多态
//让猫说话。地址晚绑定 运行阶段确定函数地址 动态多态 animal.speak前+virtual

//动态多态满足条件
//1.有继承关系//2.子类重写父类的虚函数
//动态多态的使用
//父类的引用在接收子类的对象
void doSpeak(Animal& animal)
{
	animal.speak();
}
void test01()
{
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}
void test02()
{
	cout << "sizeof=" << sizeof(Animal) << endl;
}
int main()
{
	test02();
	cin.get();
	return 0;
}