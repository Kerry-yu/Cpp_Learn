#include<iostream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

//list容器反转和排序

void printList(list<int>& l)
{
	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

//反转
void test01()
{
	list<int> L1;

	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "反转前：" << endl;
	printList(L1);

	//反转	
	L1.reverse();

	cout << "反转后：" << endl;
	printList(L1);
}

bool myCompare(int v1, int v2)
{
	//降序 就让第一个数 > 第二个数
	return v1 > v2;
}


//排序
void test02()
{
	list<int> L1;

	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	//排序
	cout << "排序前：" << endl;
	printList(L1);

	//所有不支持随机访问迭代器的容器，不可以用标准算法  sort(L1.begin(), L1.end());
	//不支持随机访问迭代器的容器，内部会提供一些相应算法

	L1.sort();//默认规则  从小到大  升序
	cout << "排序后：" << endl;
	printList(L1);

	//从大到小
	L1.sort(myCompare);
	printList(L1);
}

int main()
{
	test01();
	test02();

	return 0;
}