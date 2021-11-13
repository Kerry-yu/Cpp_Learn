#include<iostream>
#include<string>
using namespace std;

//模板的局限性
//模板并不是万能的，有些特定数据类型，需要用具体化的方式做特殊实现

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


//对比两个数据是否相等函数
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

//利用具体化的Person版本实现
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

//输出数据是否相等
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