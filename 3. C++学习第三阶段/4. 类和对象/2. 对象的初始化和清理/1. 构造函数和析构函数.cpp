#include<iostream>
#include<string>
using namespace std;
//����ĳ�ʼ��������

class Person
{
public:
	//1. ���캯�� ���г�ʼ������
	Person()
	{
		cout << "Person�Ĺ��캯���ĵ���" << endl;
	}
	//2. �������� ��������Ĳ���
	~Person()
	{
		cout << "Person�����������ĵ���" << endl;
	}
};
void test01()
{
	Person p;//��ջ�ϵ����ݣ�test01ִ����Ϻ��ͷ��������
}

int main()
{
	test01();

	return 0;
}