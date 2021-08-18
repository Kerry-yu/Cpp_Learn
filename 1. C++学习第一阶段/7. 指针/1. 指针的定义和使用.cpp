#include<iostream>

using namespace std;

int main() {

	//1. 定义一个指针
	int a = 10;
	//指针定义的语法：数据类型* 变量名
	int* p = &a;

	cout << "a的地址为：" << &a << endl;
	cout << "p的值为：" << p << endl;

	//2. 使用指针
	//可以通过解引用的方式找到指针指向的内存
	//指针前加 * 代表解引用，找到指针指向的内存中的数据
	*p = 1000;
	cout << "a= " << a << endl;
	cout << "*p= " << *p << endl;

	return 0;
}
