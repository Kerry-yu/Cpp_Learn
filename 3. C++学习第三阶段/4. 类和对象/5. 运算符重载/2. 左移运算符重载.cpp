#include<iostream>
#include<string>
using namespace std;

//�������������
class Person
{
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	//���ó�Ա�������� ���������
	//�������ó�Ա��������<< ���������Ϊ�޷�ʵ��cout�����
	/*void operator<<(cout)
	{

	}*/
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ����������������
ostream& operator<<(ostream& cout, Person& p)
{
	cout << "m_A=" << p.m_A << "  m_B=" << p.m_B;
	return cout;
}
void test01()
{
	Person p(10, 10);

	cout << p << endl;
}
int main()
{
	test01();

	return 0;
}