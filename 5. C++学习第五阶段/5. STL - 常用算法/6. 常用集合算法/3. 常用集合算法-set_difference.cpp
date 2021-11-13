#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//常用集合算法 set_difference

void MyPrint(int val)
{
	cout << val << "  ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vTarget;

	//最特殊的情况  两个容器没有交集
	vTarget.resize(max(v1.size(), v2.size()));

	//获取差集

	cout << "v1和v2的差集为：" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, MyPrint);
	cout << endl;

	cout << "v2和v1的差集为：" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, MyPrint);
	cout << endl;
}

int main()
{
	test01();

	return 0;
}