#include<iostream>
#include<string>
using namespace std;

//string �ַ���ȡ

void test01()
{
	string str = "hello";

	//1. ͨ�� [] ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << "\t";
	}
	cout << endl;

	//2. ͨ�� at ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << "\t";

	}
	cout << endl;

	//�޸ĵ����ַ�
	str[0] = 'x';
	cout << "str=" << str << endl;

	str.at(1) = 'x';
	cout << "str=" << str << endl;
}

int main()
{
	test01();

	return 0;
}