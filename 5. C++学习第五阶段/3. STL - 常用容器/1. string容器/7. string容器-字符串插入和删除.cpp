#include<iostream>
#include<string>
using namespace std;

//�ַ��� �����ɾ��

void test01()
{
	string str = "hello";

	//����
	str.insert(1, "111");
	cout << "str=" << str << endl;

	//ɾ��
	str.erase(1, 3);
	cout << "str=" << str << endl;

}

int main()
{
	test01();

	return 0;
}