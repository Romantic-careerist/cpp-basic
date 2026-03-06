#include<iostream>
using namespace std;

//计算机 普通方法
class Calculator
{
public:
	int getResule(string op)
	{
		if (op == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if(op=="-")
		{
			return m_Num1 - m_Num2;
		}
		else if (op == "*")
		{
			return m_Num1 * m_Num2;
		}
		//想要扩展新功能，需修改源码
		//开闭原则：对扩展进行开发，对修改进行关闭
	}

	int m_Num1;
	int m_Num2;
};
void test01()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResule("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResule("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResule("*") << endl;
}

//利用多态实现计算器
//实现计算器抽象类
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};
//加法计算类
class addCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//减法计算类
class subCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//乘法计算类
class mulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test02()
{
	AbstractCalculator * abc = new addCalculator;//父类的指针指向子类的对象
	abc->m_Num1 = 20;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;//堆区数据 用完销毁

	abc = new subCalculator;//父类的指针指向子类的对象
	abc->m_Num1 = 20;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	abc = new mulCalculator;//父类的指针指向子类的对象
	abc->m_Num1 = 20;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
}

int main()
{
	test01();
	cin.get();
	return 0;
}