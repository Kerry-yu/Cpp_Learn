#include<iostream>
#include<string>
#include<vector>
using namespace std;

//vector����  ���ݴ�ȡ

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//���� [] ����Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//���� at ����Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//��ȡ��һ��Ԫ��
	cout << "��һ��Ԫ��Ϊ��" << v1.front() << endl;
	//��ȡ���һ��Ԫ��
	cout << "���һ��Ԫ��Ϊ��" << v1.back() << endl;
}

int main()
{
	test01();

	return 0;
}