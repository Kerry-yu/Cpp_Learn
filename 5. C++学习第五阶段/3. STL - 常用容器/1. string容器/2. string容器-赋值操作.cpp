#include<iostream>
#include<string>
using namespace std;

//string����������ֵ����

void test01()
{
	//����һ   string& operator=(const char* s);
	string str1;
	str1 = "hello world";
	cout << "str1=" << str1 << endl;

	//������  string& operator=(const string& s);
	string str2;
	str2 = str1;
	cout << "str2=" << str2 << endl;

	//������  string& operator=(char c)
	string str3;
	str3 = 'a';
	cout << "str3=" << str3 << endl;

	//������  string& assign(const char* s);
	string str4;
	str4.assign("hello C++");
	cout << "str4=" << str4 << endl;

	//������  string& assign(const char* s, int n);
	string str5;
	str5.assign("hello world", 5);
	cout << "str5=" << str5 << endl;

	//������  string& assign(const string& s);
	string str6;
	str5.assign(str5);
	cout << "str6=" << str6 << endl;

	//������  string& assign(int n,char c);
	string str7;
	str5.assign(10, 'w');
	cout << "str7=" << str7 << endl;
}

int main()
{
	test01();

	return 0;
}