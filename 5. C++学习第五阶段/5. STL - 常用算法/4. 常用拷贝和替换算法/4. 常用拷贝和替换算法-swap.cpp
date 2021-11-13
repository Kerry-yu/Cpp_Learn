#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//���ÿ������滻�㷨 swap

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
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}

	cout << "�滻ǰ��" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;


	swap(v1, v2);

	cout << "----------------------------------------------" << endl;
	cout << "�滻��" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint());
	cout << endl;
}

int main()
{
	test01();

	return 0;
}