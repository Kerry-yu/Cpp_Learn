#include<iostream>
#include<string>
using namespace std;

//ͨ��ȫ�ֺ���	��ӡPerson��Ϣ

//��ǰ�ñ�����֪��Person��Ĵ���
template<class T1, class T2>
class Person;

//����ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "����ʵ�֡���������" << p.m_Name << endl;
	cout << "����ʵ�֡������䣺" << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	//ȫ�ֺ���	����ʵ��
	friend void printPerson(Person<T1, T2> p)
	{
		cout << "������" << p.m_Name << endl;
		cout << "���䣺" << p.m_Age << endl;
	}

	//ȫ�ֺ���	����ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};


//1. ȫ�ֺ���������ʵ��
void test01()
{
	Person<string, int> p("����", 20);
	printPerson(p);
}

//1. ȫ�ֺ���������ʵ��
void test02()
{
	Person<string, int> p("����", 30);
	printPerson2(p);
}

int main()
{
	test01();
	test02();

	return 0;
}