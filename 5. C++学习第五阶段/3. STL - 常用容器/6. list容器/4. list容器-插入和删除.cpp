#include<iostream>
#include<string>
#include<list>
using namespace std;

//list ������С

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
	list<int> L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	//300 200 100 10 20 30
	printList(L);

	///βɾ
	L.pop_back();
	//300 200 100 10 20
	printList(L);

	//ͷɾ
	L.pop_front();
	//200 100 10 20
	printList(L);

	//insert����
	list<int>::iterator it = L.begin();
	L.insert(++it, 1000);
	//200 1000 100 10 20
	printList(L);

	//ɾ��
	it = L.begin();
	L.erase(++it);
	//200 100 10 20
	printList(L);

	//�Ƴ�
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	printList(L);

	L.remove(10000);
	printList(L);

	//���
	L.clear();
	printList(L);
}


int main()
{
	test01();

	return 0;
}