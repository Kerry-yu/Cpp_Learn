#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯���ĵ���" << endl;
	}

	Person(int age)
	{
		cout << "Person���вι��캯���ĵ���" << endl;
		m_Age = age;
	}

	/*person(const person& p)
	{
		cout << "person�Ŀ������캯���ĵ���" << endl;
		m_age = p.m_age;
	}*/

	~Person()
	{

	}

	int m_Age;
};

void test01()
{
	Person p;
	p.m_Age = 18;

	Person p2(p);

	cout << "p2������Ϊ��" << p2.m_Age << endl;
}
int main()
{
	test01();

	return 0;
}