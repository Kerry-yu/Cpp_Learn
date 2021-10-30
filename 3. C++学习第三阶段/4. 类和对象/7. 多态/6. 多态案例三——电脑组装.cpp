#include<iostream>
#include<string>
using namespace std;

//电脑组装

//抽象不同零件类
//抽象cpu类
class Cpu
{
public:
	//抽象的计算函数
	virtual void Calculate() = 0;
};
//抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void Display() = 0;
};
//抽象内存内
class Memory
{
public:
	//抽象的存储函数
	virtual void Storage() = 0;
};

//电脑类
class Computer
{
public:
	Computer(Cpu* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//提供工作的函数
	void work()
	{
		m_cpu->Calculate();
		m_vc->Display();
		m_mem->Storage();
	}

	//提供析构函数 释放3个零件
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	Cpu* m_cpu;//CPU的零件指针
	VideoCard* m_vc;//显卡的零件指针
	Memory* m_mem;//内存的零件指针
};

//具体厂商
//Intel厂商
class IntelCpu :public Cpu
{
public:
	virtual void Calculate()
	{
		cout << "Intel的CPU开始计算了！" << endl;
	}
};
class IntelVc :public VideoCard
{
public:
	virtual void Display()
	{
		cout << "Intel的显卡开始显示了！" << endl;
	}
};
class IntelMem :public Memory
{
public:
	virtual void Storage()
	{
		cout << "Intel的内存开始存储了！" << endl;
	}
};
//联想厂商
class LenevoCpu :public Cpu
{
public:
	virtual void Calculate()
	{
		cout << "Lenevo的CPU开始计算了！" << endl;
	}
};
class LenevoVc :public VideoCard
{
public:
	virtual void Display()
	{
		cout << "Lenevo的显卡开始显示了！" << endl;
	}
};
class LenevoMem :public Memory
{
public:
	virtual void Storage()
	{
		cout << "Lenevo的内存开始存储了！" << endl;
	}
};

void test01()
{
	//第一台电脑零件
	Cpu* intelCpu = new IntelCpu;
	VideoCard* intelVc = new IntelVc;
	Memory* intelMem = new IntelMem;

	cout << "第一台电脑开始工作！" << endl;
	//创建第一台电脑
	Computer* computer1 = new Computer(intelCpu, intelVc, intelMem);
	computer1->work();
	delete computer1;

	cout << "------------------------------------" << endl;
	cout << "第二台电脑开始工作！" << endl;
	//创建第二台电脑
	Computer* computer2 = new Computer(new LenevoCpu, new LenevoVc, new LenevoMem);
	computer2->work();
	delete computer2;
}
int main()
{
	test01();

	return 0;
}