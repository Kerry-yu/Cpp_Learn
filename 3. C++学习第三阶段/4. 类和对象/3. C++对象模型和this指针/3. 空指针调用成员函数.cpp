#include<iostream>
#include<string>
using namespace std;

//空指针调用成员函数
class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}
	void showPersonAge()
	{
		//报错原因是因为传入指针为控
		if (this == NULL)
		{
			return;
		}
		cout << "age=" << m_Age << endl;//m_Age实际为this->m_Age
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