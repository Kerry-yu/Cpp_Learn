#include<iostream>
#include<string>
#include<vector>
using namespace std;

//vector�����������ʹ�С

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())//Ϊ�棬��������Ϊ��
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������Ϊ��" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
	}

	//����ָ����С
	v1.resize(15);
	printVector(v1);//�������ָ���ռ�䳤��Ĭ�����0 

	v1.resize(18, 100);//���������ذ汾��ָ��Ĭ�����ֵ
	printVector(v1);

	v1.resize(5);
	printVector(v1);//�������ָ���ռ��̣��������ֻ�ɾ��
}
int main()
{
	test01();

	return 0;
}