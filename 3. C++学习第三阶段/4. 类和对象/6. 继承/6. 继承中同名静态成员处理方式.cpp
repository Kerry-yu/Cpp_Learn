#include<iostream>
#include<string>
using namespace std;

//�̳��е�ͬ����̬��Ա����ʽ
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base-func��������" << endl;
	}
};
int Base::m_A = 100;

class Son :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son-func��������" << endl;
	}
};
int Son::m_A = 200;

//ͬ����̬��Ա����
void test01()
{
	//1. ͨ���������
	cout << "ͨ��������ʾ�̬��Ա������" << endl;
	Son s;
	cout << "Son��m_A = " << s.m_A << endl;
	cout << "Base��m_A = " << s.Base::m_A << endl;

	//2. ͨ����������
	cout << "ͨ���������ʾ�̬��Ա������" << endl;
	cout << "Son�� m_A=" << Son::m_A << endl;
	//��һ��::����ͨ�������ķ�ʽ���ʣ��ڶ���::������ʸ�����������
	cout << "Base�� m_A=" << Son::Base::m_A << endl;
}

//ͬ����̬��Ա����
void test02()
{
	Son s;
	//1. ͨ���������
	cout << "ͨ��������ʾ�̬��Ա����" << endl;
	s.func();
	s.Base::func();

	//2. ͨ����������
	cout << "ͨ���������ʾ�̬��Ա����" << endl;
	Son::func();
	Son::Base::func();
}
int main()
{
	test01();
	test02();

	return 0;
}