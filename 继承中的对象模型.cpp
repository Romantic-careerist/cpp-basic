#include<iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};

class Son :public Base
{
public:
	int m_D;

};

//利用开发人员命令提示符查看对象模型
//跳转盘符 F：
//跳转文件路径cd+具体路径
//查看命令：cl/d1 reportSingleLayout类名 文件名
void test01()
{
	//结果是16
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性是被编译器隐藏了，虽访问不到，但确实被继承下去了‘
	cout << "sizeof  Son = " << sizeof(Son) << endl;
}
int main()
{
	test01();
	cin.get();
	return 0;
}