#include<iostream>
#include<string>
using namespace std;

//��ͨ�����뺯��ģ����ù���

void myPrint(int a, int b)
{
	cout << "������ͨ����" << endl;
}

template<typename T>
void myPrint(T a, T b)
{
	cout << "���ú���ģ��" << endl;
}
//����ģ������
template<typename T>
void myPrint(T a, T b, T c)
{
	cout << "�������صĺ���ģ��" << endl;
}

void test01()
{
	int a = 10;
	int b = 10;
	int c = 10;

	//1. �������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
	myPrint(a, b);

	//2. ����ͨ����ģ������б� ��ǿ�Ƶ��ú���ģ��
	myPrint<>(a, b);

	//3. ����ģ��Ҳ���Է�������
	myPrint(a, b, c);

	//4. �������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);
}
int main()
{
	test01();

	return 0;
}