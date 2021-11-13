#include<iostream>
#include<string>
#include<vector>
using namespace std;

//一元谓词

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器中有没有大于5的数字
	//匿名函数对象 GreaterFive()
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到了大于5的数字为：" << *it << endl;
	}
}

int main()
{
	test01();

	return 0;
}