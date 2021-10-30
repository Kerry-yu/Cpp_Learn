#include<iostream>
#include<string>
using namespace std;

//继承中的同名静态成员处理方式
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base-func函数调用" << endl;
	}
};
int Base::m_A = 100;

class Son :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son-func函数调用" << endl;
	}
};
int Son::m_A = 200;

//同名静态成员属性
void test01()
{
	//1. 通过对象访问
	cout << "通过对象访问静态成员变量：" << endl;
	Son s;
	cout << "Son下m_A = " << s.m_A << endl;
	cout << "Base下m_A = " << s.Base::m_A << endl;

	//2. 通过类名访问
	cout << "通过类名访问静态成员变量：" << endl;
	cout << "Son下 m_A=" << Son::m_A << endl;
	//第一个::代表通过类名的方式访问，第二个::代表访问父类作用域下
	cout << "Base下 m_A=" << Son::Base::m_A << endl;
}

//同名静态成员函数
void test02()
{
	Son s;
	//1. 通过对象访问
	cout << "通过对象访问静态成员函数" << endl;
	s.func();
	s.Base::func();

	//2. 通过类名访问
	cout << "通过类名访问静态成员函数" << endl;
	Son::func();
	Son::Base::func();
}
int main()
{
	test01();
	test02();

	return 0;
}