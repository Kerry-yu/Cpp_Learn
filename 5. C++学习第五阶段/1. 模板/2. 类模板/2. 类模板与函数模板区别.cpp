#include<iostream>
#include<string>
using namespace std;

//��ģ���뺯��ģ������
//template<class NameType,class AgeType>
//ģ������б���԰���Ĭ�ϲ���
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

//1. ��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
void test01()
{
	//Person p("����"��18);//�����޷�ʹ���Զ������Ƶ�
	Person<string, int> p("����", 18);
	p.showPerson();
}

//2. ��ģ����ģ������б��п�����Ĭ�ϲ���
void test02()
{
	Person<string> p("����", 18);
	p.showPerson();
}


int main()
{
	test01();
	test02();

	return 0;
}