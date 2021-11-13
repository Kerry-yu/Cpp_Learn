#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//常用排序算法 merge

void MyPrint(int val)
{
	cout << val << "  ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;
	vector<int> vTarget;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	//为目标容器分配内存空间
	vTarget.resize(v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), MyPrint);
	cout << endl;
}

int main()
{
	test01();

	return 0;
}