#include<iostream>
#include<string>
using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:
	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200;//��̬��Ա���������Է��ʷǾ�̬��Ա�������޷����ֵ������ĸ������m_B
		cout << "static void func���� " << endl;
	}
	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2�ĵ���" << endl;
	}

public:
	static int m_A;//��̬��Ա����
	int m_B;
};

//���ַ��ʷ�ʽ
void test01()
{
	//1. ͨ���������
	Person p;
	p.func();

	//2. ͨ����������
	Person::func();

	//Person::func2();//�����޷�����˽��Ȩ��
}
int main()
{
	test01();

	return 0;
}