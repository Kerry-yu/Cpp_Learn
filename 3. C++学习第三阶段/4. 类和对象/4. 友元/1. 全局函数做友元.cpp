#include<iostream>
#include<string>
using namespace std;

class Building
{
	//goodFriendȫ�ֺ�������Building�ĺ����ѣ����Է���˽�г�Ա
	friend void goodFriend(Building* building);

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

//ȫ�ֺ���
void goodFriend(Building* building)
{
	cout << "������ȫ�ֺ��� ���ڷ��ʣ�" << building->m_Sittingroom << endl;
	cout << "������ȫ�ֺ��� ���ڷ��ʣ�" << building->m_Bedroom << endl;
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