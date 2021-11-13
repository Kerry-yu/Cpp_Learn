#include<iostream>
#include<string>
#include<vector>
using namespace std;

//vector容器构造

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
}

void test01()
{
	//默认构造  无参构造
	vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	printVector(v1);

	//通过区间方式进行构造
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);

	//n个elem方式构造
	vector<int>v3(10, 100);
	printVector(v3);

	//拷贝构造
	vector<int>v4(v3);
	printVector(v4);
}

int main()
{
	test01();

	return 0;
}