#include<iostream>

using namespace std;

int main() {

	//�߼������	�� ��
	int a = 10;
	cout << (!a) << endl;
	cout << (!!a) << endl;

	//�߼������	�� &&
	int a = 10, b = 10, c = 0;
	cout << (a && b) << endl;
	cout << (a && c) << endl;

	//�߼������	�� ||
	int a = 10, b = 10, c = 0, d = 0;
	cout << (a || b) << endl;
	cout << (a || c) << endl;
	cout << (c || d) << endl;

	return 0;
}