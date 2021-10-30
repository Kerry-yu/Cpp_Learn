#include<iostream>
#include<string>
using namespace std;

//重载递增运算符

//自定义整型
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}

	//重载前置++运算符
	MyInteger& operator++()
	{
		m_Num++;//先进行++运算
		return *this;//在返回自身
	}
	//重载后置++运算符	int代表占位参数，可以区分前置和后置递增（函数重载）
	MyInteger operator++(int)
	{
		//先记录当时结果
		MyInteger temp = *this;
		//再进行++运算
		m_Num++;
		//返回记录结果
		return temp;
	}

private:
	int m_Num;
};

//重载<<运算符
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	test01();
	test02();

	return 0;
}