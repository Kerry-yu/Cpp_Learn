#include<iostream>
#include<string>
using namespace std;

//ʵ��ͨ��	�������������ĺ���
//����	�Ӵ�С
//�㷨	ѡ��
//����	char����	��int����

//��������ģ��
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//�����㷨
template<typename T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//�϶����ֵ�±�
		for (int j = i + 1; j < len; j++)
		{
			//�϶������ֵ�ȱ���������ֵҪС��˵�� j�±��Ԫ�ز������������ֵ
			if (arr[max] < arr[j])
			{
				max = j;//�������ֵ�±�
			}
		}
		if (max != i)
		{
			//����max��iԪ��
			mySwap(arr[max], arr[i]);
		}
	}
}

//��ӡ����ģ��
template<typename T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//����char����
void test01()
{
	char charArr[] = "bacfe";
	int num = sizeof(charArr) / sizeof(char);

	mySort(charArr, num);
	printArray(charArr, num);
}

//����int����
void test02()
{
	int intArr[] = { 7,5,8,6,9,15,2,4 };
	int num = sizeof(intArr) / sizeof(int);

	mySort(intArr, num);
	printArray(intArr, num);
}
int main()
{
	test01();
	test02();

	return 0;
}