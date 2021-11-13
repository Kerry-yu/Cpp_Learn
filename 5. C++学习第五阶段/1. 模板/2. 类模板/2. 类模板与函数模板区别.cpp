#include<iostream>
#include<string>
using namespace std;

//类模板与函数模板区别
//template<class NameType,class AgeType>
//模板参数列表可以包含默认参数
template<class NameType, class AgeType = int>
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

//1. 类模板没有自动类型推导使用方式
void test01()
{
	//Person p("张三"，18);//错误，无法使用自动类型推导
	Person<string, int> p("张三", 18);
	p.showPerson();
}

//2. 类模板在模板参数列表中可以有默认参数
void test02()
{
	Person<string> p("李四", 18);
	p.showPerson();
}


int main()
{
	test01();
	test02();

	return 0;
}