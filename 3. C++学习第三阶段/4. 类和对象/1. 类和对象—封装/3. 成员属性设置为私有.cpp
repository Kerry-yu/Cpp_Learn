#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}
	//��ȡ����
	int getAge()
	{
		m_Age = 0;
		return m_Age;
	}
	//���ð���
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_Name;//����		�ɶ���д
	int m_Age;//����		ֻ��
	string m_Lover;//����	ֻд
};
int main()
{
	Person p;
	p.setName("����");
	cout << "����Ϊ��" << p.getName() << endl;
	cout << "����Ϊ��" << p.getAge() << endl;
	p.setLover("xxx");

	return 0;
}