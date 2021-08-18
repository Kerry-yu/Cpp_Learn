#include<iostream>

using namespace std;

//值传递
//定义函数，实现两个数字进行交换的函数
void swap(int num1, int num2) {
	cout << "形参交换前：" << endl;
	cout << "num2= " << num1 << endl;
	cout << "num1= " << num1 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "形参交换后：" << endl;
	cout << "num2= " << num1 << endl;
	cout << "num1= " << num1 << endl;
}

int main() {
	int a = 10;
	int b = 20;

	cout << "实参交换前：" << endl;
	cout << "num2= " << a << endl;
	cout << "num1= " << b << endl;
	//当我们做值传递时，函数的形参发生改变，并不会影响实参
	swap(a, b);

	cout << "实参交换后：" << endl;
	cout << "num2= " << a << endl;
	cout << "num1= " << b << endl;

	return 0;
}