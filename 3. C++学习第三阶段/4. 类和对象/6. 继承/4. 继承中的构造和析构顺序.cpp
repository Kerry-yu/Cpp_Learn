#include<iostream>
#include<string>
using namespace std;

//�̳��й��������˳��
class Base
{
public:
	Base()
	{
		cout << "����Ĺ��캯������" << endl;
	}
	~Base()
	{
		cout << "�����������������" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "����Ĺ��캯������" << endl;
	}
	~Son()
	{
		cout << "�����������������" << endl;
	}
};

void test01()
{
	//Base base;
	Son son;
}
int main()
{
	test01();

	return 0;
}