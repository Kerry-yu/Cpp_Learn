#include<iostream>
#include<string>
#include<list>
using namespace std;

//list ������ֵ�ͽ���

void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//��ֵ
void test01()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	//1. operator=��ֵ
	list<int> L2;
	L2 = L1;
	printList(L2);

	//2. assign��ֵһ
	list<int> L3;
	L3.assign(L2.begin(), L2.end());
	printList(L2);

	//3. assign��ֵ��
	list<int> L4;
	L4.assign(10, 100);
	printList(L4);

}

//����
void test02()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int> L2;
	L2.assign(10, 100);

	cout << "����ǰ��" << endl;
	printList(L1);
	printList(L2);

	//����
	L1.swap(L2);
	cout << "������" << endl;
	printList(L1);
	printList(L2);
}

int main()
{
	test01();
	test02();

	return 0;
}