#include<iostream>

using namespace std;

int main() {

	//逻辑运算符	非 ！
	int a = 10;
	cout << (!a) << endl;
	cout << (!!a) << endl;

	//逻辑运算符	与 &&
	int a = 10, b = 10, c = 0;
	cout << (a && b) << endl;
	cout << (a && c) << endl;

	//逻辑运算符	或 ||
	int a = 10, b = 10, c = 0, d = 0;
	cout << (a || b) << endl;
	cout << (a || c) << endl;
	cout << (c || d) << endl;

	return 0;
}