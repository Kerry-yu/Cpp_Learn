#include<iostream>
#include<string>
using namespace std;

//��ģ���������������
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
		cout << "������" << this->m_Name << endl;
		cout << "���䣺" << this->m_Age << endl;
	}

public:
	T1 m_Name;
	T2 m_Age;
};

//1. ָ�����뷽ʽ
void printPerson(Person<string, int>& p)
{
	p.showPerson();
}

void test01()
{
	Person<string, int> p("����", 18);
	printPerson(p);
}

//2. ����ģ�廯
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p)
{
	p.showPerson();

	//�鿴������������
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}

void test02()
{
	Person<string, int> p("����", 20);
	printPerson2(p);
}

//3. ������ģ�廯
template<class T>
void printPerson3(T& p)
{
	p.showPerson();
}

void test03()
{
	Person<string, int> p("����", 40);
	printPerson3(p);
}

int main()
{
	test01();
	test02();
	test03();

	return 0;
}