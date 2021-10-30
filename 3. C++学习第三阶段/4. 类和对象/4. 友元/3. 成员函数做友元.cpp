#include<iostream>
#include<string>
using namespace std;

class Building;
class GoodFriend
{
public:
	GoodFriend();
	void visit();//让visit函数可以访问Building的私有成员
	void visit02();//让visit02不能访问Building的私有成员

public:
	Building* building;

};

class Building
{
	//告诉编译器 GoodFriend类下的visit成员函数作为本类的好朋友，可以访问该类的私有成员
	friend void GoodFriend::visit();
public:
	Building();

public:
	string m_Sittingroom;

private:
	string m_Bedroom;

};

Building::Building()
{
	m_Sittingroom = "客厅";
	m_Bedroom = "卧室";
}

void GoodFriend::visit()
{
	cout << "visit函数正在访问：" << building->m_Sittingroom << endl;
	cout << "visit函数正在访问：" << building->m_Bedroom << endl;
}

void GoodFriend::visit02()
{
	cout << "visit02函数正在访问：" << building->m_Sittingroom << endl;
	//cout << "visit02函数正在访问：" << building->m_Bedroom << endl;
}

GoodFriend::GoodFriend()
{
	building = new Building;
}

void test01()
{
	GoodFriend ff;
	ff.visit();
	ff.visit02();
}
int main()
{
	test01();

	return 0;
}