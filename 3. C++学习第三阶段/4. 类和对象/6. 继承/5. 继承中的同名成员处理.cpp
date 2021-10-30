#include<iostream>
#include<string>
using namespace std;

//继承中同名成员处理
class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base-func函数调用" << endl;
	}
	void func(int a)
	{
		cout << "Base-func(int a)函数调用" << endl;
	}

public:
	int m_A;
};

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son-func函数调用" << endl;
	}

public:
	int m_A;
};

//1. 同名成员属性
void test01()
{
	Son s;
	cout << "Son下m_A = " << s.m_A << endl;
	//如果通过子类对象访问父类下的同名成员，需要加作用域
	cout << "Base下m_A = " << s.Base::m_A << endl;
}

//2. 同名成员函数
void  test02()
{
	Son s;
	s.func();
	s.Base::func();
	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类的所有同名成员函数
	//s.func(100);
	s.Base::func(100);
}

int main()
{
	test01();
	test02();

	return 0;
}