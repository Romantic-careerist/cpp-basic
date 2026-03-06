#include<iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "animal构造函数" << endl;
	}

	//利用虚析构 可解决父类指针释放子类对象时不干净问题
	/*virtual ~Animal()
	{
		cout << "animal需析构函数" << endl;
	}*/
	//纯虚析构
	virtual ~Animal() = 0;//函数声明

	virtual void speak() = 0;
};
Animal::~Animal()//函数实现
{
	cout << "animal纯虚析构函数" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)//构造
	{
		cout << "cat构造函数" << endl;
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_Name << "喵喵喵喵" << endl;
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "cat析构函数" << endl;
			delete m_Name;
			m_Name = NULL;
			//delete清空指针指向的内容，不是清空指针，
			// delete后指针指向一块什么都没有的内存，这就是悬挂指针，要避免悬挂指针因此要=NULL
		}
	}
	string *m_Name;//在堆区
};

void test01()//使用堆上对象
{
	Animal* animal = new Cat("Tom");//分配了两块堆内存1.Cat对象本身2.m_Name指向的string对象
	animal->speak();
	delete animal;//只释放了第一块，第二块泄露
	//父类指针在析构的时候，不会调用子类中的析构函数，导致子类如果有堆区属性，出现内存泄漏
}
//堆区的优势和使用场景：
//堆区的内存使用比较灵活，对象的生命周期可以由程序员控制。例如，当你需要在不同的函数之间传递对象，并且对象的生命周期要跨越函数调用时，使用堆区是一个不错的选择。
//堆区可以动态分配大内存块，适合创建大型对象或数组。


//void test01()//使用栈上对象
//{
//	Cat cat;
//	Animal* animal = &cat;
//	animal->speak();
//}
//栈区的优势和使用场景：
//栈区的内存分配和释放是自动的，由编译器管理，使用起来更加方便。
//栈区的内存访问速度比堆区快，适合创建生命周期较短的小型对象。
int main()
{
	test01();

	cin.get();
	return 0;
}