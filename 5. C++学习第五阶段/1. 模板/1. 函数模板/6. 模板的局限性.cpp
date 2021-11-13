#include<iostream>
#include<string>
using namespace std;

//ģ��ľ�����
//ģ�岢�������ܵģ���Щ�ض��������ͣ���Ҫ�þ��廯�ķ�ʽ������ʵ��

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

public:
	string m_Name;
	int m_Age;

};


//�Ա����������Ƿ���Ⱥ���
template<typename T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯��Person�汾ʵ��
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Name == p2.m_Name)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//��������Ƿ����
template<typename T>
void myPrint(T a, T b)
{
	bool ret = myCompare(a, b);

	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}

void test01()
{
	int a = 10;
	int b = 20;

	myPrint(a, b);
}

void test02()
{
	Person a("Tom", 10);
	Person b("Tom", 10);

	myPrint(a, b);
}

int main()
{
	test01();
	test02();

	return 0;
}