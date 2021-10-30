#include<iostream>
#include<string>
using namespace std;

//�������ʹ�������
class Animal
{
public:
	Animal()
	{
		cout << "Animal�Ĺ��캯������" << endl;
	}
	//���麯��
	virtual void speak() = 0;

	//�������������Խ��	����ָ���ͷ�������󲻸ɾ�������
	/*virtual ~Animal()
	{
		cout << "Animal��������������" << endl;

	}*/

	//��������
	//��Ҫ������Ҳ��Ҫʵ��
	//���˴�������������Ҳ���ڳ�����
	virtual ~Animal()
	{
		cout << "Animal�Ĵ�����������" << endl;
	}
};

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat�Ĺ��캯������" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{
		cout << *m_Name << "Сè��˵��" << endl;
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat��������������" << endl;

			//����ָ����������ʱ�򣬲�������������������
			//����������ж������ݣ�������ڴ�й©
			delete m_Name;
			m_Name = NULL;
		}
	}

public:
	string* m_Name;
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	delete animal;
}
int main()
{
	test01();

	return 0;
}