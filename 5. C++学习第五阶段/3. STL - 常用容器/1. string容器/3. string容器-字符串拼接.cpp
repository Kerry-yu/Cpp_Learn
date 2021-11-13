#include<iostream>
#include<string>
using namespace std;

//string字符串拼接

void test01()
{
	//方法一  string& operator+=(const char* str);
	string str1 = "hello";
	str1 += " world";
	cout << "str1=" << str1 << endl;

	//方法二  string& operator+=(const char c);
	string str2 = "hello";
	str2 += "!";
	cout << "str2=" << str2 << endl;

	//方法三  string& operator+=(const string& str);
	string str3 = " world";
	str1 += str3;
	cout << "str1=" << str1 << endl;

	//方法四  string& append(const char* s);
	string str4 = "hello";
	str4.append(" world");
	cout << "str4=" << str4 << endl;

	//方法五  string& append(const char* s,int n)
	string str5 = "hello";
	str5.append(" world", 3);
	cout << "str5=" << str5 << endl;

	//方法六  string& append(const string& s);
	string str6 = "hello";
	str5.append(str5);
	cout << "str6=" << str6 << endl;

	//方法七  string& append(const string& s,int pos,int n);
	string str7 = "hello";
	str7.append(str6, 3, 2);//参数pos是从哪个位置开始截取，参数n是截取个数
	cout << "str7=" << str7 << endl;
}

int main()
{
	test01();

	return 0;
}