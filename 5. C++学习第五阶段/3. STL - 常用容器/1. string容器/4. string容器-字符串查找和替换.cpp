#include<iostream>
#include<string>
using namespace std;

//�ַ������Һ��滻

//1. ����
void test01()
{
	//find
	string str1 = "abcdefgdef";

	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ������ַ���λ��Ϊ" << pos << endl;
	}
	//rfind ��find����
	//rfind�Ǵ����������  find�������Ҳ�
	pos = str1.rfind("de");
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ������ַ���λ��Ϊ" << pos << endl;
	}
}

//2. �滻
void test02()
{
	string str1 = "abcdef";
	//��1��λ���� 3���ַ� �滻Ϊ1111
	str1.replace(1, 3, "1111");

	cout << "str1=" << str1 << endl;
}

int main()
{
	test01();
	test02();

	return 0;
}