#include<iostream>
#include<string>

using namespace std;
//函数重载
//可以让函数名相同，提高复用性

//函数重载的满足条件
//1. 同一个作用域下
//2. 函数名称不同
//3. 函数参数类型不同，或者个数不同，或者顺序不同
void func()
{
	cout << "func的调用" << endl;
}
void func(int a)
{
	cout << "func(int a)的调用!" << endl;
}
void func(double a)
{
	cout << "func(double a)的调用!!" << endl;
}

int main()
{
	func(10);
	func(3.14);

	return 0;
}