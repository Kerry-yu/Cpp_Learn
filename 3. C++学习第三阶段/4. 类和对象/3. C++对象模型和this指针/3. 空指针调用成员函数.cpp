#include<iostream>
#include<string>
using namespace std;

//��ָ����ó�Ա����
class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}
	void showPersonAge()
	{
		//����ԭ������Ϊ����ָ��Ϊ��
		if (this == NULL)
		{
			return;
		}
		cout << "age=" << m_Age << endl;//m_Ageʵ��Ϊthis->m_Age
	}

	int m_Age;
};

void test01()
{
	Person* p = NULL;

	p->showClassName();
	p->showPersonAge();

}
int main()
{
	return 0;
}