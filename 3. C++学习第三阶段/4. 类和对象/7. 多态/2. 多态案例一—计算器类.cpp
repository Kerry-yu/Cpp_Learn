#include<iostream>
#include<string>
using namespace std;

//�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����

//��ͨд��
class Caculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}

		//�������չ�µĹ��ܣ���Ҫ�޸�Դ��
		//����ʵ������ �ᳫ ����ԭ�򣺶���չ���п��������޸Ľ��йر�
	}
public:
	int m_Num1;
	int m_Num2;
};

//��̬д��

//ʵ�ּ�����������
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
public:
	int m_Num1;
	int m_Num2;
};

//�ӷ���������
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//����������
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//�˷�������
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test01()
{
	Caculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 5;

	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
}

void test02()
{
	//��̬ʹ������
	//����ָ���������ָ���������

	//�ӷ�����
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 5;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->m_Num1 + abc->m_Num2 << endl;
	//�������ٵ�����������Ҫ����
	delete abc;

	//��������
	abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 5;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->m_Num1 - abc->m_Num2 << endl;
	//�������ٵ�����������Ҫ����
	delete abc;
}

int main()
{
	test01();
	test02();

	return 0;
}