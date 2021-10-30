#include<iostream>
#include<string>
using namespace std;

class Building
{
	//goodFriend全局函数是类Building的好朋友，可以访问私有成员
	friend void goodFriend(Building* building);

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

//全局函数
void goodFriend(Building* building)
{
	cout << "好朋友全局函数 正在访问：" << building->m_Sittingroom << endl;
	cout << "好朋友全局函数 正在访问：" << building->m_Bedroom << endl;
}

void test01()
{
	Building building;
	goodFriend(&building);
}
int main()
{
	test01();

	return 0;
}