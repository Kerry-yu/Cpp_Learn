#include<iostream>
#include<string>
using namespace std;

//��̳��﷨
class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
public:
	int m_A;
};

class Base2
{
public:
	Base2()
	{
		m_A = 200;
	}
public:
	int m_A;
};

class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
public:
	int m_C;
	int m_D;
};

void test01()
{
	Son s;
	cout << "sizeof Son = " << sizeof(s) << endl;
	//�������г���ͬ����Ա����Ҫ������������
	cout << "Base1��m_A = " << s.Base1::m_A << endl;
	cout << "Base2��m_A = " << s.Base2::m_A << endl;
}

int main()
{
	test01();

	return 0;
}