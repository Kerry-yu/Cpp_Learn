#include<iostream>
#include<string>
#include<vector>
#include<time.h>
#include<algorithm>
using namespace std;

//���������㷨  random_shuffle

void MyPrint(int val)
{
	cout << val << "  ";
}

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//����˳��
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;
}

int main()
{
	srand((unsigned int)time(NULL));

	test01();

	return 0;
}