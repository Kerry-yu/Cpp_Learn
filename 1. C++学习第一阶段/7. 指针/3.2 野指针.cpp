#include<iostream>

using namespace std;

int main() {
	//Ұָ��

	//ָ�����pָ���ڴ���Ϊ0x1100�Ŀռ�
	int* p = (int*)0x1100;

	//����ָ�뱨��
	cout << *p << endl;

	return 0;
}
