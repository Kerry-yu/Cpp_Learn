#include<iostream>
#include "swap.h"

using namespace std;

//实现两个数字交换的函数
/*
	//函数声明
	void swap(int a, int b);

	//函数定义
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
