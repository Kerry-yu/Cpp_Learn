#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//���ò����㷨 find_if


//1. ������������
class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}

};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());

	if (it == v.end())
	{
		cout << "û�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << endl;
	}
}

//2. �����Զ�����������
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

class Greater20
{
public:
	bool operator()(Person& p)
	{
		return p.m_Age > 20;
	}
};

void test02()
{
	vector<Person> v;

	//��������
	Person p1("aa", 10);
	Person p2("bb", 20);
	Person p3("cc", 30);
	Person p4("dd", 40);

	//��ŵ�������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//���������20����

	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << endl;
		cout << "������" << it->m_Name << "  ���䣺" << it->m_Age << endl;
	}
}

int main()
{
	test01();
	test02();

	return 0;
}