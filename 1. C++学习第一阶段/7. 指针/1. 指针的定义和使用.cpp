#include<iostream>

using namespace std;

int main() {

	//1. ����һ��ָ��
	int a = 10;
	//ָ�붨����﷨����������* ������
	int* p = &a;

	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "p��ֵΪ��" << p << endl;

	//2. ʹ��ָ��
	//����ͨ�������õķ�ʽ�ҵ�ָ��ָ����ڴ�
	//ָ��ǰ�� * ��������ã��ҵ�ָ��ָ����ڴ��е�����
	*p = 1000;
	cout << "a= " << a << endl;
	cout << "*p= " << *p << endl;

	return 0;
}
