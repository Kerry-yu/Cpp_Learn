#include<iostream>
#include<string>
using namespace std;

class Building;
class GoodFriend
{
public:
	GoodFriend();
	void visit();//��visit�������Է���Building��˽�г�Ա
	void visit02();//��visit02���ܷ���Building��˽�г�Ա

public:
	Building* building;

};

class Building
{
	//���߱����� GoodFriend���µ�visit��Ա������Ϊ����ĺ����ѣ����Է��ʸ����˽�г�Ա
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
	m_Sittingroom = "����";
	m_Bedroom = "����";
}

void GoodFriend::visit()
{
	cout << "visit�������ڷ��ʣ�" << building->m_Sittingroom << endl;
	cout << "visit�������ڷ��ʣ�" << building->m_Bedroom << endl;
}

void GoodFriend::visit02()
{
	cout << "visit02�������ڷ��ʣ�" << building->m_Sittingroom << endl;
	//cout << "visit02�������ڷ��ʣ�" << building->m_Bedroom << endl;
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