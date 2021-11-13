#include<iostream>
#include<string>
using namespace std;

//普通函数与函数模板调用规则

void myPrint(int a, int b)
{
	cout << "调用普通函数" << endl;
}

template<typename T>
void myPrint(T a, T b)
{
	cout << "调用函数模板" << endl;
}
//函数模板重载
template<typename T>
void myPrint(T a, T b, T c)
{
	cout << "调用重载的函数模板" << endl;
}

void test01()
{
	int a = 10;
	int b = 10;
	int c = 10;

	//1. 如果函数模板和普通函数都可以实现，优先调用普通函数
	myPrint(a, b);

	//2. 可以通过空模板参数列表 来强制调用函数模板
	myPrint<>(a, b);

	//3. 函数模板也可以发生重载
	myPrint(a, b, c);

	//4. 如果函数模板可以产生更好的匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);
}
int main()
{
	test01();

	return 0;
}