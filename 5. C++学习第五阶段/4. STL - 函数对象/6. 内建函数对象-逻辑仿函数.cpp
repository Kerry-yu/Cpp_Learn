#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

//�ڽ��������� �߼��º���

void printVector(vector<bool>& v)
{
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//�߼��� logical_not
void test01()
{
	vector<bool> v;

	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	printVector(v);

	//�����߼��� ������v�ᵽ����v2�У���ִ��ȡ������
	vector<bool> v2;
	//ΪĿ���������ٿռ�
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	printVector(v2);
}

int main()
{
	test01();

	return 0;
}