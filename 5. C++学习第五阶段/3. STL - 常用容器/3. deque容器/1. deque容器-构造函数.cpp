#include<iostream>
#include<string>
#include<deque>
using namespace std;

//deque 构造函数

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//1. 默认构造形式
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	printDeque(d1);

	//2. 区间方式：deque(beg,end);
	deque<int>d2(d1.begin(), d1.end());
	printDeque(d2);

	//3. n个elem方式：deque(n,elem);
	deque<int>d3(10, 100);
	printDeque(d3);

	//4. 拷贝构造
	deque<int> d4(d3);
	printDeque(d4);
}

int main()
{
	test01();

	return 0;
}