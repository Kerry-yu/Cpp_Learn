#include<iostream>
#include<string>
using namespace std;

//类模板与继承
template<class T>
class Base
{
public:
	T m;
};

//1. 必须要知道父类的T类型,才能继承给子类
//class Son :public Base
class Son :public Base<int>
{

};

void test01()
{
	Son s1;
}

//2. 如果想灵活指定父类的T类型，子类也需要变为类模板
template<class T1, class T2>//父类为T1，子类为T2
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}
public:
	T1 obj;
};

void test02()
{
	Son2<int, char> s2;
}

int main()
{
	test01();
	test02();

	return 0;
}