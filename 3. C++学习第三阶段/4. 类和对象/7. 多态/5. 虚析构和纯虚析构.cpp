#include<iostream>
#include<string>
using namespace std;

//虚析构和纯虚析构
class Animal
{
public:
	Animal()
	{
		cout << "Animal的构造函数调用" << endl;
	}
	//纯虚函数
	virtual void speak() = 0;

	//利用虚析构可以解决	父类指针释放子类对象不干净的问题
	/*virtual ~Animal()
	{
		cout << "Animal的析构函数调用" << endl;

	}*/

	//纯虚析构
	//需要声明，也需要实现
	//有了纯虚析构，该类也属于抽象类
	virtual ~Animal()
	{
		cout << "Animal的纯虚析构调用" << endl;
	}
};

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat的构造函数调用" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{
		cout << *m_Name << "小猫在说话" << endl;
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat的析构函数调用" << endl;

			//父类指针在析构的时候，不会调用子类的析构函数
			//如果子类中有堆区数据，会造成内存泄漏
			delete m_Name;
			m_Name = NULL;
		}
	}

public:
	string* m_Name;
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	delete animal;
}
int main()
{
	test01();

	return 0;
}