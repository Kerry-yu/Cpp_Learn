#include<iostream>
#include<string>

using namespace std;
//1.new�Ļ����﷨
int* func()
{
	//�ڶ���������������
	//new������ ���������͵�ָ��
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	//������ͷŶ��������ݣ����ùؼ���delete
	delete p;

	//cout << *p << endl; �ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ�����
}
//2.�ڶ�������new��������
void test02()
{
	//����10�������ݵ����飬�ڶ���
	int* arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������	Ҫ��[]
	delete[] arr;
}
int main()
{
	test01();
	test02();

	return 0;
}