#include<iostream>
#include<string>

using namespace std;
//ռλ����
//ռλ���� ��������Ĭ�ϲ���
void func(int a, int = 10)
{
	cout << "this is func" << endl;
}
int main()
{
	func(10, 10);

	return 0;
}