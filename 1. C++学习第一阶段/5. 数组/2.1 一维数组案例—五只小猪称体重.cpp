#include<iostream>

using namespace std;

int main() {

	//1. ����5ֻС�����ص�����
	int arr[5] = { 300,350,200,400,250 };

	//2. ���������ҵ����ֵ
	int max = arr[0];//���϶�һ�����ֵΪ������Ԫ��
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//�����ʵ�����Ԫ�ش���max������maxΪ������Ԫ��
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "���ص�С������Ϊ��" << max << endl;


	return 0;
}