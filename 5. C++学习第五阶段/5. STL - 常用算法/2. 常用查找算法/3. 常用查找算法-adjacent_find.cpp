#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//���ò����㷨 adjacent_find
void test01()
{
	vector<int> v;

	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(0);
	v.push_back(0);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ������ظ�Ԫ��Ϊ��" << *pos << endl;
	}
}


int main()
{
	test01();

	return 0;
}