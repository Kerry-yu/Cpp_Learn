#include<iostream>
#include "swap.h"

using namespace std;

//ʵ���������ֽ����ĺ���
/*
	//��������
	void swap(int a, int b);

	//��������
	void swap(int a, int b) {
		int temp = a;
		a = b;
		b = temp;
		cout << "a= " << a << endl;
		cout << "b= " << a << endl;
	}
*/

int main() {
	int a = 20;
	int b = 10;

	swap(a, b);

	return 0;
}
