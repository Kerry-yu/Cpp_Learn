#include<iostream>

using namespace std;

int main() {

	//三目运算符
	//比较a和b，将值更大的赋给c
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : c);
	cout << "c=" << c << endl;

	//c++中三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;
}