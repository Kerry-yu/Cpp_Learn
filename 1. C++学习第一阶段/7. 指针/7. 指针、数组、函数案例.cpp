#include<iostream>

using namespace std;

//ð��������
void bubbleSort(int* arr, int length)//����1������׵�ַ������2���鳤��
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//��ӡ���麯��
void printArray(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
}
int main() {
	//1. �ȴ�������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);

	//2. ��������ʵ��ð������
	bubbleSort(arr, len);

	//3. ��ӡ����������
	printArray(arr, len);

	return 0;
}