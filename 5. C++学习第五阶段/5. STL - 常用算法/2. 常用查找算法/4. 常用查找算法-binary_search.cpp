#include<iostream>
#include<string>
#include<vector>
#include<algorithm> 
using namespace std;

//常用查找算法 binary_search
void test01()
{
	vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器中是否有 9
	//注意：容器必须是有序序列
	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret == true)
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}
}

int main()
{
	test01();

	return 0;
}