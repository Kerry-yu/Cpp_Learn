#include<iostream>
#include<string>
#include<vector>
#include<algorithm> 
using namespace std;

//���ò����㷨 binary_search
void test01()
{
	vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//�����������Ƿ��� 9
	//ע�⣺������������������
	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret == true)
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "û�ҵ�" << endl;
	}
}

int main()
{
	test01();

	return 0;
}