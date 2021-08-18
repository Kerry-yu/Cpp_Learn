#include <iostream>
#include<string>
using namespace std;

int main()
{
	//1. C风格字符串
	char str[] = "hello world";
	cout << str << endl;

	//2. C++风格字符串
	//包含string头文件
	string str2 = "hello world";
	cout << str2 << endl;
	return 0;
}