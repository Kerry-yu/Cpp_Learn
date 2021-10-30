#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数的调用" << endl;
	}

	Person(int age)
	{
		cout << "Person的有参构造函数的调用" << endl;
		m_Age = age;
	}

	/*person(const person& p)
	{
		cout << "person的拷贝构造函数的调用" << endl;
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

	cout << "p2的年龄为：" << p2.m_Age << endl;
}
int main()
{
	test01();

	return 0;
}