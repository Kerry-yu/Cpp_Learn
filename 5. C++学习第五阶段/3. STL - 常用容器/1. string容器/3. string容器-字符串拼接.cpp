#include<iostream>
#include<string>
using namespace std;

//string�ַ���ƴ��

void test01()
{
	//����һ  string& operator+=(const char* str);
	string str1 = "hello";
	str1 += " world";
	cout << "str1=" << str1 << endl;

	//������  string& operator+=(const char c);
	string str2 = "hello";
	str2 += "!";
	cout << "str2=" << str2 << endl;

	//������  string& operator+=(const string& str);
	string str3 = " world";
	str1 += str3;
	cout << "str1=" << str1 << endl;

	//������  string& append(const char* s);
	string str4 = "hello";
	str4.append(" world");
	cout << "str4=" << str4 << endl;

	//������  string& append(const char* s,int n)
	string str5 = "hello";
	str5.append(" world", 3);
	cout << "str5=" << str5 << endl;

	//������  string& append(const string& s);
	string str6 = "hello";
	str5.append(str5);
	cout << "str6=" << str6 << endl;

	//������  string& append(const string& s,int pos,int n);
	string str7 = "hello";
	str7.append(str6, 3, 2);//����pos�Ǵ��ĸ�λ�ÿ�ʼ��ȡ������n�ǽ�ȡ����
	cout << "str7=" << str7 << endl;
}

int main()
{
	test01();

	return 0;
}