#include<iostream>
#include<string>
using namespace std;

//类模板
template<class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name:" << this->m_Name << endl;
		cout << "age:" << this->m_Age << endl;
	}

public:
	NameType m_Name;
	AgeType m_Age;
};

void test01()
{
	Person<string, int> p1("张三", 20);
	p1.showPerson();
}
int main()
{
	test01();

	return 0;
}