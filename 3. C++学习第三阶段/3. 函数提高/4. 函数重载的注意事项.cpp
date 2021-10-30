#include<iostream>
#include<string>

using namespace std;
//函数重载的注意事项
//1. 引用作为重载的条件
void func(int& a)
{
	cout << "fun(int &a)调用" << endl;
}
void func(const int& a)
{
	cout << "fun(const int &a)调用" << endl;
}
//2. 函数重载碰到默认参数
void func2(int a, int b = 10)
{
	cout << "fun2(int a)调用" << endl;
}
void func2(int a)
{
	cout << "fun2(int a)调用" << endl;
}

int main()
{
	int a = 10;
	func(a);//fun(int &a)调用
	func(10);//fun(const int &a)调用

	return 0;
}