#include<iostream>
#include<string>

using namespace std;
//����Ĭ�ϲ���
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
//ע������
//1. ���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ��֮�󣬴����Ҷ�������Ĭ��ֵ
//int func2(int a = 10, int b, int c)
//{
//	return a + b + c;
//}
//2. ���������ͺ���ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a = 10, int b = 20);
int func2(int a, int b)
{
	return a + b;
}

int main()
{
	//���Լ��������ݣ������Լ��ģ���û�����ݣ�����Ĭ�ϵ�
	cout << func(10) << endl;
	cout << func(10, 30) << endl;

	return 0;
}