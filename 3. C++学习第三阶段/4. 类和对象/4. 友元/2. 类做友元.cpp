#include<iostream>
#include<string>
using namespace std;

//类做友元
class Building
{
	//GoodFriend是本类的好朋友，可以访问该类的私有成员
	friend	class GoodFriend;
public:
	Building()
	{
		m_Sittingroom = "客厅";
		m_Bedroom = "卧室";
	}

public:
	string m_Sittingroom;

private:
	string m_Bedroom;
};

class GoodFriend
{
public:
	GoodFriend()
	{
		building = new Building;
	}
	void visit()
	{
		cout << "好朋友全局函数 正在访问：" << building->m_Sittingroom << endl;
		cout << "好朋友全局函数 正在访问：" << building->m_Bedroom << endl;
	}

public:
	Building* building;
};



void test01()
{
	GoodFriend gg;
	gg.visit();
}
int main()
{
	test01();

	return 0;
}