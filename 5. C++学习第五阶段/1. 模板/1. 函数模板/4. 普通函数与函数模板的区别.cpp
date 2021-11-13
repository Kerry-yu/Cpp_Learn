#include<iostream>
#include<string>
using namespace std;

//普通函数与函数模板的区别

//普通函数 
int myAdd01(int a, int b)
{
	return a + b;
}

//函数模板
template<typename T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	cout << myAdd01(a, b) << endl;
	//普通函数会发生隐式类型转换
	cout << myAdd01(a, c) << endl;

	//函数模板使用自动类型推导时 不会发生隐式类转换
	//cout << myAdd02(a, c) << endl;

	//利用显示指定类型的方式，可以发生隐式类型转换
	cout << myAdd02<int>(a, c) << endl;
}
int main()
{
	test01();

	return 0;
}