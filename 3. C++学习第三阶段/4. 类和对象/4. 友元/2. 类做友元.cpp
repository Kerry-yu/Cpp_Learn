#include<iostream>
#include<string>
using namespace std;

//������Ԫ
class Building
{
	//GoodFriend�Ǳ���ĺ����ѣ����Է��ʸ����˽�г�Ա
	friend	class GoodFriend;
public:
	Building()
	{
		m_Sittingroom = "����";
		m_Bedroom = "����";
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
		cout << "������ȫ�ֺ��� ���ڷ��ʣ�" << building->m_Sittingroom << endl;
		cout << "������ȫ�ֺ��� ���ڷ��ʣ�" << building->m_Bedroom << endl;
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