#include<iostream>
#include<string>

using namespace std;
//函数默认参数
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
//注意事项
//1. 如果某个位置已经有了默认参数，那么从这个位置之后，从左到右都必须有默认值
//int func2(int a = 10, int b, int c)
//{
//	return a + b + c;
//}
//2. 函数声明和函数实现只能有一个有默认参数
int func2(int a = 10, int b = 20);
int func2(int a, int b)
{
	return a + b;
}

int main()
{
	//若自己传入数据，就用自己的；若没传数据，就用默认的
	cout << func(10) << endl;
	cout << func(10, 30) << endl;

	return 0;
}