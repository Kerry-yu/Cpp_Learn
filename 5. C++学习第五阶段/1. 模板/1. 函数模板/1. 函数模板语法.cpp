#include<iostream>
#include<string>
using namespace std;

//函数模板

//交换两个整型
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//交换两个浮点型
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//函数模板
template<typename T>	//声明一个模板，T是一个通用数据类型

void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;

	//swap(a, b);

	//利用函数模板交换
	//两种方式使用函数模板
	//1. 自动数据类型推导
	//mySwap(a, b);
	//2. 显示指定类型
	mySwap<int>(a, b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	double c = 1.1;
	double d = 2.2;

	swap(c, d);

	cout << "c=" << c << endl;
	cout << "d=" << d << endl;

}

int main()
{
	test01();

	return 0;
}