#include<iostream>
#include<string>
using namespace std;

//�̳з�ʽ
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//�����̳�
class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;
		m_B = 10;
		//m_C = 10;
	}
};
void test01()
{
	Son1 son1;
	son1.m_A = 100;
	son1.m_B = 100;
	son1.m_C = 100;
}

//�����̳�
class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 10;
		m_B = 10;
		//m_C = 10;
	}
};
void test02()
{
	Son2 son2;
	son2.m_A = 100;
	son2.m_B = 100;
	son2.m_C = 100;
}

//˽�м̳�
class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 10;
		m_B = 10;
		//m_C = 10;
	}

};
void test03()
{
	Son3 son3;
	son3.m_A = 100;
	son3.m_B = 100;
	son3.m_C = 100;
}

int main()
{
	test01();
	test02();
	test03();

	return 0;
}