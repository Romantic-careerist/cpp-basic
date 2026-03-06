#include<iostream>
using namespace std;

//抽象不同零件类
//抽象CPU类——计算
class CPU
{
public:
	virtual void calculate() = 0;
};
//抽象显卡类——显示
class VideoCard
{
public:
	virtual void display() = 0;
};

//抽象内存条类——储存
class Memory
{
public:
	virtual void storage() = 0;
};

class Computer//创建电脑
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	~Computer()
	{
		//示释放CPU零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//示释放显卡零件
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		//示释放内存条零件
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU* m_cpu;
	VideoCard*m_vc;
	Memory* m_mem;

public:	//提供工作函数
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
};

//Inter厂商
class InterCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Inter的CPU开始计算" << endl;
	}
};
class InterVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter的VideoCard开始显示" << endl;
	}
};
class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter的Memory开始储存" << endl;
	}
};

//Lenovo厂商
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始计算" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的VideoCard开始显示" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的Memory开始储存" << endl;
	}
};

//第一台电脑
void test01()
{
	cout << "第一台电脑开始工作" << endl;
	//第一台电脑零件
	CPU* interCpu = new InterCPU;
	VideoCard* interCard = new InterVideoCard;
	Memory* interMem = new InterMemory;
	//创建第一台电脑
	Computer* computer1 = new Computer(interCpu, interCard, interMem);
	computer1->work();
	delete computer1;

	cout << "----------第二台电脑开始工作-----------" << endl;
	//创建第二台电脑
	Computer* computer2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "----------第三台电脑开始工作-----------" << endl;
	//创建第三台电脑
	Computer* computer3 = new Computer(new LenovoCPU, new InterVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;

}
int main()
{
	test01();
	cin.get();
	return 0;
}