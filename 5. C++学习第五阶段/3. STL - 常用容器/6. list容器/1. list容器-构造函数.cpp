#include<iostream>
#include<string>
#include<list>
using namespace std;

//list �������캯��

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
	//1. Ĭ�Ϲ���
	list<int> L1;

	//�������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//��������
	printList(L1);

	//2. ���䷽ʽ����
	list<int> L2(L1.begin(), L1.end());
	printList(L2);

	//3. ��������
	list<int> L3(L2);
	printList(L3);

	//4. n��elem
	list<int> L4(10, 1000);
	printList(L4);
}
int main()
{
	test01();

	return 0;
}