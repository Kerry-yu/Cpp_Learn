#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;

		//this是指向p2的指针，*this指向的就是p2这个对象本体
		return *this;
	}

	int age;
};
//1. 解决名称冲突
void test01()
{
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}

//2. 返回对象本身用*this
void test02()
{
	Person p1(10);

	Person p2(10);

	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2的年龄为：" << p2.age << endl;

}

int main()
{
	test01();
	test02();

	return 0;
}