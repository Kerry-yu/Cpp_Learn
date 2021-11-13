#include<iostream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

//list������ת������

void printList(list<int>& l)
{
	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

//��ת
void test01()
{
	list<int> L1;

	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "��תǰ��" << endl;
	printList(L1);

	//��ת	
	L1.reverse();

	cout << "��ת��" << endl;
	printList(L1);
}

bool myCompare(int v1, int v2)
{
	//���� ���õ�һ���� > �ڶ�����
	return v1 > v2;
}


//����
void test02()
{
	list<int> L1;

	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	//����
	cout << "����ǰ��" << endl;
	printList(L1);

	//���в�֧��������ʵ��������������������ñ�׼�㷨  sort(L1.begin(), L1.end());
	//��֧��������ʵ��������������ڲ����ṩһЩ��Ӧ�㷨

	L1.sort();//Ĭ�Ϲ���  ��С����  ����
	cout << "�����" << endl;
	printList(L1);

	//�Ӵ�С
	L1.sort(myCompare);
	printList(L1);
}

int main()
{
	test01();
	test02();

	return 0;
}