#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}

	Person(int age)
	{
		cout << "Person���вι��캯������" << endl;
		m_Age = age;
	}

	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Person�Ŀ������캯������" << endl;
	}

	~Person()
	{
		cout << "Person��������������" << endl;

	}

public:
	int m_Age;
};
//1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(20);
	Person p2(p1);

	cout << "P2������Ϊ:" << p2.m_Age << endl;
}
//2. ֵ���ݵķ�ʽ�������Ĳ�����ֵ
void doWork(Person p)
{

}
void test02()
{
	Person p;
	doWork(p);
}
//3. ֵ��ʽ���ؾֲ�����
Person doWork2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test03()
{
	Person p = doWork2();
	cout << (int*)&p << endl;
}
int main()
{
	test01();
	test03();
	return 0;
}