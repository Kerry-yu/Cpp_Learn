#include<iostream>
#include<string>
using namespace std;

//������װ

//����ͬ�����
//����cpu��
class Cpu
{
public:
	//����ļ��㺯��
	virtual void Calculate() = 0;
};
//�����Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void Display() = 0;
};
//�����ڴ���
class Memory
{
public:
	//����Ĵ洢����
	virtual void Storage() = 0;
};

//������
class Computer
{
public:
	Computer(Cpu* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�ṩ�����ĺ���
	void work()
	{
		m_cpu->Calculate();
		m_vc->Display();
		m_mem->Storage();
	}

	//�ṩ�������� �ͷ�3�����
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
	Cpu* m_cpu;//CPU�����ָ��
	VideoCard* m_vc;//�Կ������ָ��
	Memory* m_mem;//�ڴ�����ָ��
};

//���峧��
//Intel����
class IntelCpu :public Cpu
{
public:
	virtual void Calculate()
	{
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
	}
};
class IntelVc :public VideoCard
{
public:
	virtual void Display()
	{
		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};
class IntelMem :public Memory
{
public:
	virtual void Storage()
	{
		cout << "Intel���ڴ濪ʼ�洢�ˣ�" << endl;
	}
};
//���볧��
class LenevoCpu :public Cpu
{
public:
	virtual void Calculate()
	{
		cout << "Lenevo��CPU��ʼ�����ˣ�" << endl;
	}
};
class LenevoVc :public VideoCard
{
public:
	virtual void Display()
	{
		cout << "Lenevo���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};
class LenevoMem :public Memory
{
public:
	virtual void Storage()
	{
		cout << "Lenevo���ڴ濪ʼ�洢�ˣ�" << endl;
	}
};

void test01()
{
	//��һ̨�������
	Cpu* intelCpu = new IntelCpu;
	VideoCard* intelVc = new IntelVc;
	Memory* intelMem = new IntelMem;

	cout << "��һ̨���Կ�ʼ������" << endl;
	//������һ̨����
	Computer* computer1 = new Computer(intelCpu, intelVc, intelMem);
	computer1->work();
	delete computer1;

	cout << "------------------------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ������" << endl;
	//�����ڶ�̨����
	Computer* computer2 = new Computer(new LenevoCpu, new LenevoVc, new LenevoMem);
	computer2->work();
	delete computer2;
}
int main()
{
	test01();

	return 0;
}