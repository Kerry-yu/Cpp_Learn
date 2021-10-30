#include<iostream>
#include<string>
using namespace std;

//继承中构造和析构顺序
class Base
{
public:
	Base()
	{
		cout << "父类的构造函数调用" << endl;
	}
	~Base()
	{
		cout << "父类的析构函数调用" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "子类的构造函数调用" << endl;
	}
	~Son()
	{
		cout << "子类的析构函数调用" << endl;
	}
};

void test01()
{
	//Base base;
	Son son;
}
int main()
{
	test01();

	return 0;
}