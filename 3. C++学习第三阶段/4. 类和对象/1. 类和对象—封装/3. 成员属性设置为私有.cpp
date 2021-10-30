#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}
	//获取年龄
	int getAge()
	{
		m_Age = 0;
		return m_Age;
	}
	//设置爱人
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_Name;//姓名		可读可写
	int m_Age;//年龄		只读
	string m_Lover;//爱人	只写
};
int main()
{
	Person p;
	p.setName("张三");
	cout << "姓名为：" << p.getName() << endl;
	cout << "年龄为：" << p.getAge() << endl;
	p.setLover("xxx");

	return 0;
}