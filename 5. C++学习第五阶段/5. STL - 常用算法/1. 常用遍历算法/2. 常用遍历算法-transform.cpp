#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//常用遍历算法

class Transform
{
public:
	int operator()(int v)
	{
		return v + 100;//可以进行算术操作
	}
};

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << "  ";
	}
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int> vTarget;//目标容器
	vTarget.resize(v.size());//目标容器必须提前开辟空间

	transform(v.begin(), v.end(), vTarget.begin(), Transform());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
}

int main()
{
	test01();

	return 0;
}
