#include<iostream>
#include<string>

using namespace std;
//�������ص�ע������
//1. ������Ϊ���ص�����
void func(int& a)
{
	cout << "fun(int &a)����" << endl;
}
void func(const int& a)
{
	cout << "fun(const int &a)����" << endl;
}
//2. ������������Ĭ�ϲ���
void func2(int a, int b = 10)
{
	cout << "fun2(int a)����" << endl;
}
void func2(int a)
{
	cout << "fun2(int a)����" << endl;
}

int main()
{
	int a = 10;
	func(a);//fun(int &a)����
	func(10);//fun(const int &a)����

	return 0;
}