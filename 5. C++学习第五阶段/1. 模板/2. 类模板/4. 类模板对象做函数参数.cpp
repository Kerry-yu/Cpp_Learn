#include<iostream>
#include<string>
using namespace std;

//类模板对象做函数参数
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "姓名：" << this->m_Name << endl;
		cout << "年龄：" << this->m_Age << endl;
	}

public:
	T1 m_Name;
	T2 m_Age;
};

//1. 指定传入方式
void printPerson(Person<string, int>& p)
{
	p.showPerson();
}

void test01()
{
	Person<string, int> p("张三", 18);
	printPerson(p);
}

//2. 参数模板化
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p)
{
	p.showPerson();

	//查看参数数据类型
	cout << "T1的类型为：" << typeid(T1).name() << endl;
	cout << "T2的类型为：" << typeid(T2).name() << endl;
}

void test02()
{
	Person<string, int> p("李四", 20);
	printPerson2(p);
}

//3. 整个类模板化
template<class T>
void printPerson3(T& p)
{
	p.showPerson();
}

void test03()
{
	Person<string, int> p("王五", 40);
	printPerson3(p);
}

int main()
{
	test01();
	test02();
	test03();

	return 0;
}