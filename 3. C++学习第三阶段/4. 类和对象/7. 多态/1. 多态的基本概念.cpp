#include<iostream>
#include<string>
using namespace std;

//多态

//动物类
class Animal
{
public:
	//虚函数	
	//函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

//猫类
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "猫猫在说话" << endl;
	}
};

//狗类
class Dog :public Animal
{
public:
	//重写：函数返回值类型 函数名称 函数参数列表完全相同
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//执行说话的函数
//地址早绑定		在编译阶段确定函数地址
//如果像执行猫说话	需要地址晚绑定

//动态多态满足条件：
//1. 有继承关系
//2. 子类重写父类的虚函数

//动态多态使用
//父类的指针或者引用 执行子类对象	Animal& animal=cat(dog)

void doSpeak(Animal& animal)//Animal& animal=cat(dog)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	Dog dog;
	doSpeak(cat);
	doSpeak(dog);
}

int main()
{
	test01();

	return 0;
}