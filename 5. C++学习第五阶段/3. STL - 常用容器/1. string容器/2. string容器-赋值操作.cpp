#include<iostream>
#include<string>
using namespace std;

//string容器——赋值操作

void test01()
{
	//方法一   string& operator=(const char* s);
	string str1;
	str1 = "hello world";
	cout << "str1=" << str1 << endl;

	//方法二  string& operator=(const string& s);
	string str2;
	str2 = str1;
	cout << "str2=" << str2 << endl;

	//方法三  string& operator=(char c)
	string str3;
	str3 = 'a';
	cout << "str3=" << str3 << endl;

	//方法四  string& assign(const char* s);
	string str4;
	str4.assign("hello C++");
	cout << "str4=" << str4 << endl;

	//方法五  string& assign(const char* s, int n);
	string str5;
	str5.assign("hello world", 5);
	cout << "str5=" << str5 << endl;

	//方法六  string& assign(const string& s);
	string str6;
	str5.assign(str5);
	cout << "str6=" << str6 << endl;

	//方法七  string& assign(int n,char c);
	string str7;
	str5.assign(10, 'w');
	cout << "str7=" << str7 << endl;
}

int main()
{
	test01();

	return 0;
}