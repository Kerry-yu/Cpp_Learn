#include<iostream>
#include<string>
using namespace std;
//������
class Person
{
public:
	//thisָ��ı���	��ָ�볣��	ָ���ָ���ǲ������޸ĵ�
	//const Person *const this
	//�ڳ�Ա���������const�����ε���thisָ�루�������һ��const������ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		//m_A = 100;
		m_B = 100;
	}
	void func()
	{

	}

	int m_A;
	mutable int m_B;//�����������ʹ�ڳ������У���ֵҲ�����޸�
};

void test01()
{
	Person p;
	p.showPerson();
}

//������
void test02()
{
	const Person p;//�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;
	p.m_B = 100;//m_B������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();�����������޸ĳ�Ա���ԣ�����ͨ��Ա����ȴ���޸ĳ�Ա����
}

int main()
{
	return 0;
}