#include<iostream>
#include<string>
using namespace std;

//访问权限	三种			
//公共权限	public		成员		类内可以访问，类外也可以访问
//保护权限	protected	成员		类内可以访问，类外不可以访问
//私有权限	private		成员		类内可以访问，类外不可以访问

class Person
{
public:
	//公共权限
	string m_Name;

protected:
	//保护权限
	string m_Car;

private:
	//私有权限
	int m_Password;

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "宝马";
		m_Password = 123456;
	}
};
int main()
{
	Person p1;
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";

	return 0;
}