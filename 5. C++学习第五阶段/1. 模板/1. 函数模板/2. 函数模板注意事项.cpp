#include<iostream>
#include<string>
using namespace std;

//����ģ��ע������



template<typename T>	//typename�����滻Ϊclass
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	//1. �Զ������Ƶ��������Ƶ���һ�µ���������T���ſ���ʹ��
	mySwap(a, b);//һ�£���ȷ
	//mySwap(a, c);//��һ�£�����

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

//2. ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<typename T>
void func()
{
	cout << "func ����" << endl;
}

void test02()
{
	//func();//δȷ��T�������ͣ����ܵ���
	func<int>();
}

int main()
{
	test01();
	test02();

	return 0;
}