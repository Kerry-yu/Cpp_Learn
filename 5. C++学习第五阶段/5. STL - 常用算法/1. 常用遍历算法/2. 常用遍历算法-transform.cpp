#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//���ñ����㷨

class Transform
{
public:
	int operator()(int v)
	{
		return v + 100;//���Խ�����������
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

	vector<int> vTarget;//Ŀ������
	vTarget.resize(v.size());//Ŀ������������ǰ���ٿռ�

	transform(v.begin(), v.end(), vTarget.begin(), Transform());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
}

int main()
{
	test01();

	return 0;
}
