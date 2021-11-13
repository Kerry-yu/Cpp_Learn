#include<iostream>
#include<string>
#include<list>
using namespace std;

//list���� ������ �����Զ�����������

class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

public:
	string m_Name;//����
	int m_Age;//����
	int m_Height;//���

};

void printList(list<Person>& p)
{
	for (list<Person>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << "������" << (*it).m_Name << "  ���䣺" << (*it).m_Age << "  ��ߣ�" << (*it).m_Height << endl;
	}
}

//ָ���������
bool comparePerson(Person& p1, Person& p2)
{
	//������ͬ ����߽���
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;
	}
	//�������� ����
	return p1.m_Age < p2.m_Age;
}

void test01()
{
	list<Person> L;

	Person p1("����", 35, 175);
	Person p2("����", 35, 200);
	Person p3("�ŷ�", 35, 160);
	Person p4("����", 25, 190);
	Person p5("��Ȩ", 40, 170);
	Person p6("�ܲ�", 45, 180);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	printList(L);


	//����
	cout << "--------------------------";
	cout << "�����" << endl;

	L.sort(comparePerson);

	printList(L);

}

int main()
{
	test01();

	return 0;
}