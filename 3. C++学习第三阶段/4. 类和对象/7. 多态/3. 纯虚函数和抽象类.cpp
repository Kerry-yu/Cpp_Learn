#include<iostream>
#include<string>
using namespace std;

//���麯���ͳ�����
class Base
{
public:
	//���麯��
	//ֻҪ��һ�����麯����������Ϊ������
	//�������ص㣺
	//1. �޷�ʵ��������
	//2. ����������� ������д����Ĵ��麯�� ����Ҳ���ڳ�����
	virtual void func() = 0;
};

class Son :public Base
{
public:
	virtual void func()
	{
		cout << "func��������" << endl;
	}
};

void test01()
{
	//Base b;	�������޷�ʵ��������
	Base* base = new Son;
	base->func();
}

int main()
{
	test01();

	return 0;
}