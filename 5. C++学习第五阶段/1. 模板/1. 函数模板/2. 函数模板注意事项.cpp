#include<iostream>
#include<string>
using namespace std;

//函数模板注意事项



template<typename T>	//typename可以替换为class
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
	char c = 'c';

	//1. 自动类型推导，必须推导出一致的数据类型T，才可以使用
	mySwap(a, b);//一致，正确
	//mySwap(a, c);//不一致，错误

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

//2. 模板必须要确定出T的数据类型，才可以使用
template<typename T>
void func()
{
	cout << "func 调用" << endl;
}

void test02()
{
	//func();//未确定T数据类型，不能调用
	func<int>();
}

int main()
{
	test01();
	test02();

	return 0;
}