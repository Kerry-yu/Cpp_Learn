#include<iostream>

using namespace std;

//定义加法函数
//函数定义时，num1和num2为形式参数，无真实数据
int add(int num1, int num2) {
	int sum = num1 + num2;

	return sum;
}
int main() {

	//main函数种调用add函数
	int a = 10;
	int b = 23;
	//函数调用语法：函数名称(参数)
	//a和b为 实际参数
	//函数调用时，实参的值会传递给形参
	int c = add(a, b);
	cout << "c=" << c << endl;

	return 0;
}