#include<iostream>

using namespace std;

int main() {
	//��������;

	//1. ����ͳ�������������ڴ��еĳ���
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�صĸ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2. ���Ի�ȡ�������ڴ��е��׵�ַ
	cout << "�����׵�ַΪ��" << (int)arr << endl;
	cout << "�����һ��Ԫ�صĵ�ַΪ��" << (int)&(arr[0]) << endl;
	cout << "����ڶ���Ԫ�صĵ�ַΪ��" << (int)&(arr[1]) << endl;

	//�������ǳ����������Խ����޸�
	//arr = 100;	��

	return 0;
}