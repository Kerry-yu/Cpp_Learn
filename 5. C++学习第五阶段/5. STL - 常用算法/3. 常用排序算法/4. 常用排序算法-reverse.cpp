#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//���������㷨 reverse
void MyPrint(int val)
{
	cout << val << "  ";
}

void test01()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "��תǰ��" << endl;
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;

	reverse(v.begin(), v.end());

	cout << "��ת��" << endl;
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;
}

int main()
{
	test01();

	return 0;
}