#include<iostream>
#include<string>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

//常用算术生成算法 fill
void MyPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v;
	v.resize(10);

	//后期重新填充
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;
}

int main()
{
	test01();

	return 0;
}