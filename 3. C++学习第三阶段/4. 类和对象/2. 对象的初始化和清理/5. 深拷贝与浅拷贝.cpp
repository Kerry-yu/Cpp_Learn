#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}

	Person(int age, int height)
	{
		cout << "Person的有参构造函数调用" << endl;
		m_Age = age;
		m_Height = new int(height);
	}

	//自己实现拷贝构造函数，解决浅拷贝问题
	Person(const Person& p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//编译器默认实现的拷贝构造函数，会导致指向同一片内存空间

		//深拷贝操作
		m_Height = new int(*p.m_Height);
	}

	~Person()
	{
		//析构代码，将堆区开辟的数据释放
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构函数调用" << endl;
	}

public:
	int m_Age;
	int* m_Height;
};

//浅拷贝问题——堆区内存重复释放
void test01()
{
	Person p1(18, 160);
	cout << "p1的年龄为：" << p1.m_Age << "  身高为" << *p1.m_Height << endl;
	Person p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << "  身高为" << *p2.m_Height << endl;
}
int main()
{
	test01();

	return 0;
}