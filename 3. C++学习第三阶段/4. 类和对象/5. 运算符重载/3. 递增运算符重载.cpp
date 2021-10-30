#include<iostream>
#include<string>
using namespace std;

//���ص��������

//�Զ�������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}

	//����ǰ��++�����
	MyInteger& operator++()
	{
		m_Num++;//�Ƚ���++����
		return *this;//�ڷ�������
	}
	//���غ���++�����	int����ռλ��������������ǰ�úͺ��õ������������أ�
	MyInteger operator++(int)
	{
		//�ȼ�¼��ʱ���
		MyInteger temp = *this;
		//�ٽ���++����
		m_Num++;
		//���ؼ�¼���
		return temp;
	}

private:
	int m_Num;
};

//����<<�����
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	test01();
	test02();

	return 0;
}