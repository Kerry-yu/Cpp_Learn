#include<iostream>
#include<string>
#include<list>
using namespace std;

//list 容器构造函数

void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//1. 默认构造
	list<int> L1;

	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//遍历容器
	printList(L1);

	//2. 区间方式构造
	list<int> L2(L1.begin(), L1.end());
	printList(L2);

	//3. 拷贝构造
	list<int> L3(L2);
	printList(L3);

	//4. n个elem
	list<int> L4(10, 1000);
	printList(L4);
}
int main()
{
	test01();

	return 0;
}