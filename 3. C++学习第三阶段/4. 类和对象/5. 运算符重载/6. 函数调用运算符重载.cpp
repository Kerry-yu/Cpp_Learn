#include<iostream>
#include<string>
using namespace std;

//�����������������

//��ӡ�����
class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test01()
{
	MyPrint myprint;
	myprint("Hello World!");
}
//�º����ǳ���û�й̶���д��
//�ӷ���
class Myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	Myadd myadd;
	int ret = myadd(100, 100);
	cout << "ret=" << ret << endl;

	//������������
	cout << Myadd()(100, 100) << endl;
}
int main()
{
	test01();
	test02();

	return 0;
}