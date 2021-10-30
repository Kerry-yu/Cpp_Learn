#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);
	}
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	//���� ��ֵ�����
	Person& operator=(Person& p)
	{
		//�������ṩǳ����
		//m_Age=p.m_Age;

		//Ӧ�����ж��Ƿ��������ڶ���������У����ͷŸɾ���Ȼ�������
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		//���
		m_Age = new int(*p.m_Age);

		//���ض�����
		return *this;
	}
public:
	int* m_Age;
};

void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);

	p3 = p2 = p1;

	cout << "p1������Ϊ��" << *p1.m_Age << endl;
	cout << "p2������Ϊ��" << *p2.m_Age << endl;
	cout << "p3������Ϊ��" << *p3.m_Age << endl;
}
int main()
{
	test01();

	return 0;
}