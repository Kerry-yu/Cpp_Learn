#include<iostream>

using namespace std;

int main() {

	//��Ŀ�����
	//�Ƚ�a��b����ֵ����ĸ���c
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : c);
	cout << "c=" << c << endl;

	//c++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;
}