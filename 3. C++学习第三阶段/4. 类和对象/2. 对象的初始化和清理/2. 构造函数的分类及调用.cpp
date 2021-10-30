#include<iostream>
#include<string>
using namespace std;

//构造函数的分类和调用
//分类
class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person的构造函数调用" << endl;
	}
	Person(int a)
	{
		cout << "Person的构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person& p)
	{
		//将传入的人身上的所有属性，拷贝到该人身上
		age = p.age;
	}
	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

public:
	int age = 0;
};

//调用
void test01()
{
	//1. 括号法
	Person p1;//默认构造函数调用
	Person p2(10);//有参构造函数
	Person p3(p2);//有参构造函数
	//注意事项一
	//调用默认构造函数时，不要加（）
	//因为编译器会把 Person p() 当初函数声明，不会认为在创建对象

	/*cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的年龄为：" << p3.age << endl;*/

	//2. 显示法
	Person p4;
	Person p5 = Person(10);//有参构造
	Person p6 = Person(p2);//拷贝构造

	Person(10);//匿名对象。特点：当前行执行结束后，系统会立即回收掉匿名对象
	//注意事项二：
	//不要用拷贝构造函数初始化一个匿名对象		编译器会认为Person(p3) == Person p3

	//3. 隐式转换法
	Person p7 = 10;//相当于写了Person p4 = Person(10)
	Person p8 = p7;//拷贝构造

}
int main()
{

	return 0;
}