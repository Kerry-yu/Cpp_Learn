#include<iostream>
#include<string>
using namespace std;

//字符串查找和替换

//1. 查找
void test01()
{
	//find
	string str1 = "abcdefgdef";

	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "找到字符串，字符串位置为" << pos << endl;
	}
	//rfind 和find区别
	//rfind是从右往左查找  find从左往右查
	pos = str1.rfind("de");
	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "找到字符串，字符串位置为" << pos << endl;
	}
}

//2. 替换
void test02()
{
	string str1 = "abcdef";
	//从1号位置起 3个字符 替换为1111
	str1.replace(1, 3, "1111");

	cout << "str1=" << str1 << endl;
}

int main()
{
	test01();
	test02();

	return 0;
}