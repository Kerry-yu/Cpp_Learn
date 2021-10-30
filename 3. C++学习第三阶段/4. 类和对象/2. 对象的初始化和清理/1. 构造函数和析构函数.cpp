#include<iostream>
#include<string>
using namespace std;
//对象的初始化和清理

class Person
{
public:
	//1. 构造函数 进行初始化操作
	Person()
	{
		cout << "Person的构造函数的调用" << endl;
	}
	//2. 析构函数 进行清理的操作
	~Person()
	{
		cout << "Person的析构函数的调用" << endl;
	}
};
void test01()
{
	Person p;//在栈上的数据，test01执行完毕后，释放这个对象
}

int main()
{
	test01();

	return 0;
}