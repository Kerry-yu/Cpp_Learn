#include<iostream>
#include<string>
#include<list>
using namespace std;

//list���� ���ݴ�ȡ

void test01()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//L1[0] �������� [] ����list����������
	//L1[0] �������� at ����list����������
	//ԭ����list�����������������������Կռ�洢���ݣ���������֧��������ʵ�

	cout << "��һ��Ԫ��Ϊ��" << L1.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << L1.back() << endl;

	//��֤��������֧���������
	list<int>::iterator it = L1.begin();

	//it = it + 1; //��֧���������
	it++;//֧��˫��
	it--;

}
int main()
{
	test01();

	return 0;
}