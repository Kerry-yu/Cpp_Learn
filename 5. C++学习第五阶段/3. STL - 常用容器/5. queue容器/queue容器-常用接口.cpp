#include<iostream>
#include<string>
#include<queue>
using namespace std;

//���� Queue
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

void test01()
{
	//��������
	queue<Person> q;

	//��������
	Person p1("��ɮ", 30);
	Person p2("�����", 1000);
	Person p3("��˽�", 900);
	Person p4("ɳɮ", 800);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//�ж϶���ֻҪ��Ϊ�գ��鿴��ͷ���鿴��β��������
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷԪ��---������" << q.front().m_Name << "  ���䣺" << q.front().m_Age << endl;
		cout << "��βԪ��---������" << q.back().m_Name << "  ���䣺" << q.back().m_Age << endl;

		//����
		q.pop();
	}
	cout << "���д�СΪ��" << q.size() << endl;
}

int main()
{
	test01();

	return 0;
}