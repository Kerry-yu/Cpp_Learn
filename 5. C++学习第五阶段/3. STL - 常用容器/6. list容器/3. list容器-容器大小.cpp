#include<iostream>
#include<string>
#include<list>
using namespace std;

//list 容器大小

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
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	//判断容器是否为空
	if (L1.empty())
	{
		cout << "L1为空" << endl;
	}
	else
	{
		cout << "L1不为空" << endl;
		cout << "L1的元素个数为：" << L1.size() << endl;
	}

	//重新指定大小
	L1.resize(10, 10000);
	printList(L1);

	L1.resize(2);
	printList(L1);
}


int main()
{
	test01();

	return 0;
}