#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

//内建函数对象  关系仿函数

//大于 greater
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

	printVector(v);

	//降序
	//sort(v.begin(), v.end(), MyCompare());
	sort(v.begin(), v.end(), greater<int>());

	printVector(v);


}
int main()
{
	test01();

	return 0;
}