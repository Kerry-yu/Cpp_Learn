#include<iostream>
#include<string>
using namespace std;

//��ͨ�����뺯��ģ�������

//��ͨ���� 
int myAdd01(int a, int b)
{
	return a + b;
}

//����ģ��
template<typename T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	cout << myAdd01(a, b) << endl;
	//��ͨ�����ᷢ����ʽ����ת��
	cout << myAdd01(a, c) << endl;

	//����ģ��ʹ���Զ������Ƶ�ʱ ���ᷢ����ʽ��ת��
	//cout << myAdd02(a, c) << endl;

	//������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת��
	cout << myAdd02<int>(a, c) << endl;
}
int main()
{
	test01();

	return 0;
}