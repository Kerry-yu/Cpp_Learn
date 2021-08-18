#include<iostream>

using namespace std;

int main() {
	//加减乘除
	int a1 = 10;
	int b1 = 3;
	double a2 = 5.0;
	double b2 = 2.5;
	double b3 = 2.3;

	cout << +a1 << endl;
	cout << -b1 << endl;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//整型变量做除法结果是整型
	cout << a2 / b2 << endl;
	cout << a2 / b3 << endl;//浮点型变量做除法结果除尽为整型，除不尽为浮点型

	//取模运算——就是求余数
	int c1 = 10;
	int d1 = 3;
	int d2 = 20;

	cout << c1 % d1 << endl;
	cout << c1 % d2 << endl;

	//递增运算
	//1. 前置递增
	int a = 10;
	++a;
	cout << "a=" << a << endl;

	//后置递增
	int b = 10;
	b++;
	cout << "b=" << b << endl;

	//前置和后置的区别
	//前置递增  先让变量+1  然后进行表达式运算
	int c = 10;
	int d = ++c * 10;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;


	//后置递增  先进行表达式运算，后让变量+1
	int e = 10;
	int f = e++ * 10;
	cout << "e=" << e << endl;
	cout << "f=" << f << endl;

	return 0;
}