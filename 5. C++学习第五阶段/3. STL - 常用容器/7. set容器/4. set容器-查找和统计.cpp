#include<iostream>
#include<string>
#include<set>
using namespace std;

//set���� ���Һ�ͳ��

void test01()
{
	//����
	set<int> s1;

	//��������
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ��" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}
}

//ͳ��
void test02()
{
	//����
	set<int> s1;

	//��������
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	//ͳ��30�ĸ���
	int num = s1.count(30);
	//����set���� ͳ�ƽ��ֻΪ 0 �� 1
	cout << "num=" << num << endl;
}

int main()
{
	test01();
	test02();

	return 0;
}