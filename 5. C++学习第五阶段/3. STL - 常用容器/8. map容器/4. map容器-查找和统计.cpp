#include<iostream>
#include<string>
#include<map>
using namespace std;

//map���� ���Һ�ͳ��

void test01()
{
	//����
	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));

	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "���ҵ�Ԫ�� key = " << (*pos).first << "  value = " << (*pos).second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	//map����������ظ�Ԫ�� ����countͳ�ƽ��ֻΪ 0 �� 1
	int num = m.count(3);
	cout << "num = " << num << endl;

}
int main()
{
	test01();

	return 0;
}