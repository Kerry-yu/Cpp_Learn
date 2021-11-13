#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//二元谓词

class MyCompare
{
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2;
	}
};

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	sort(v.begin(), v.end());

	printVector(v);

	//使用函数对象 改变算法策略，使得排序规则为从大到小
	sort(v.begin(), v.end(), MyCompare());

	cout << "----------------------" << endl;
	printVector(v);
}

int main()
{
	test01();

	return 0;
}