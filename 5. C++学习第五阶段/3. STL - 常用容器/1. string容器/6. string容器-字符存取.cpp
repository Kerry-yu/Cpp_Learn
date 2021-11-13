#include<iostream>
#include<string>
using namespace std;

//string 字符存取

void test01()
{
	string str = "hello";

	//1. 通过 [] 访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << "\t";
	}
	cout << endl;

	//2. 通过 at 访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << "\t";

	}
	cout << endl;

	//修改单个字符
	str[0] = 'x';
	cout << "str=" << str << endl;

	str.at(1) = 'x';
	cout << "str=" << str << endl;
}

int main()
{
	test01();

	return 0;
}