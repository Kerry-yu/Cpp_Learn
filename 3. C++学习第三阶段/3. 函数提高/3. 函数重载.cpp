#include<iostream>
#include<string>

using namespace std;
//��������
//�����ú�������ͬ����߸�����

//�������ص���������
//1. ͬһ����������
//2. �������Ʋ�ͬ
//3. �����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
void func()
{
	cout << "func�ĵ���" << endl;
}
void func(int a)
{
	cout << "func(int a)�ĵ���!" << endl;
}
void func(double a)
{
	cout << "func(double a)�ĵ���!!" << endl;
}

int main()
{
	func(10);
	func(3.14);

	return 0;
}