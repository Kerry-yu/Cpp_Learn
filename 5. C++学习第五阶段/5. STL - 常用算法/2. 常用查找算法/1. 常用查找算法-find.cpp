#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//���ò����㷨  find

//���� ������������
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//���� 
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << endl;
	}
}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//���� == ʹ�ײ�find����֪����ζԱ�Person
	bool operator==(const Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
	}

public:
	string m_Name;
	int m_Age;
};

//���� �Զ�����������
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

	Person pp("bb", 20);

	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
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