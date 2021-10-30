#include<iostream>
#include<string>
using namespace std;

//��̬������--������Ʒ
class AbstractDrinking
{
public:
	//עˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void PutSomething() = 0;

	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//��������
class Coffee :public AbstractDrinking
{
public:
	//עˮ
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뿧�ȱ�" << endl;
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "������" << endl;
	}
};

//������Ҷ
class Tea :public AbstractDrinking
{
public:
	//עˮ
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "����豭" << endl;
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "�������" << endl;
	}
};

void doWork(AbstractDrinking* abs)
{
	abs->makeDrink();
	delete abs;//�ͷ�
}

void test01()
{
	//��������
	doWork(new Coffee);

	cout << "---------------" << endl;
	//������
	doWork(new Tea);
}
int main()
{
	test01();

	return 0;
}