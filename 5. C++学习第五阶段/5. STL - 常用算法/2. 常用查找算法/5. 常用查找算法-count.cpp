#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//���ò����㷨 count

//1. ͳ��������������
void test01()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);

	int num = count(v.begin(), v.end(), 10);
	cout << "10��Ԫ�ظ���Ϊ��" << num << endl;
}

//2. ͳ���Զ�����������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator==(const Person& p)
	{
		if (this->m_Age = p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
public:
	string m_Name;
	int m_Age;
};

void test02()
{
	vector<Person> v;

	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 30);
	Person p5("�ܲ�", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("�����", 35);

	int num = count(v.begin(), v.end(), p);

	cout << "�������ͬ����������Ϊ��" << num << endl;
}

int main()
{
	test01();
	test02();

	return 0;
}