#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//常用查找算法  find

//查找 内置数据类型
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找 
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到了" << endl;
	}
}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//重载 == 使底层find函数知道如何对比Person
	bool operator==(const Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
	}

public:
	string m_Name;
	int m_Age;
};

//查找 自定义数据类型
void test02()
{
	vector<Person> v;

	//创建数据
	Person p1("aa", 10);
	Person p2("bb", 20);
	Person p3("cc", 30);
	Person p4("dd", 40);

	//存放到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person pp("bb", 20);

	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到了" << endl;
		cout << "姓名：" << it->m_Name << "  年龄：" << it->m_Age << endl;
	}
}

int main()
{
	test01();
	test02();

	return 0;
}