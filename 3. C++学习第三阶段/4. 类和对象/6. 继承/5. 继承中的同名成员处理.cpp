#include<iostream>
#include<string>
using namespace std;

//�̳���ͬ����Ա����
class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base-func��������" << endl;
	}
	void func(int a)
	{
		cout << "Base-func(int a)��������" << endl;
	}

public:
	int m_A;
};

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son-func��������" << endl;
	}

public:
	int m_A;
};

//1. ͬ����Ա����
void test01()
{
	Son s;
	cout << "Son��m_A = " << s.m_A << endl;
	//���ͨ�����������ʸ����µ�ͬ����Ա����Ҫ��������
	cout << "Base��m_A = " << s.Base::m_A << endl;
}

//2. ͬ����Ա����
void  test02()
{
	Son s;
	s.func();
	s.Base::func();
	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص����������ͬ����Ա����
	//s.func(100);
	s.Base::func(100);
}

int main()
{
	test01();
	test02();

	return 0;
}