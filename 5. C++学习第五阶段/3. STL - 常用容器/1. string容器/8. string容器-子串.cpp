#include<iostream>
#include<string>
using namespace std;

//string���Ӵ�

void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);

	cout << "subStr=" << subStr << endl;
}

//ʵ�ò���
void test02()
{
	string email = "zhangsan@sina.com";

	//���ʼ���ַ�� ��ȡ �û�����
	int pos = email.find("@");

	string usrName = email.substr(0, pos);
	cout << "usrName=" << usrName << endl;
}
int main()
{
	test01();
	test02();

	return 0;
}