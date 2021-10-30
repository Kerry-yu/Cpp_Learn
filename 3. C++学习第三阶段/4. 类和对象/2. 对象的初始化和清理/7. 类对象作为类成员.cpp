#include<iostream>
#include<string>
using namespace std;
class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone的构造函数调用" << endl;
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}
public:
	string m_PName;
};

class Person
{
public:
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person的构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
public:
	string m_Name;
	Phone m_Phone;
};
void test01()
{
	Person p("张三", "苹果手机");
	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}
int main()
{
	test01();

	return 0;
}