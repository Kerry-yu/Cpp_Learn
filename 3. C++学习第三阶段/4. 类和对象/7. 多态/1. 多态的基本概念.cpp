#include<iostream>
#include<string>
using namespace std;

//��̬

//������
class Animal
{
public:
	//�麯��	
	//����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ������������
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

//è��
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "èè��˵��" << endl;
	}
};

//����
class Dog :public Animal
{
public:
	//��д����������ֵ���� �������� ���������б���ȫ��ͬ
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ���		�ڱ���׶�ȷ��������ַ
//�����ִ��è˵��	��Ҫ��ַ���

//��̬��̬����������
//1. �м̳й�ϵ
//2. ������д������麯��

//��̬��̬ʹ��
//�����ָ��������� ִ���������	Animal& animal=cat(dog)

void doSpeak(Animal& animal)//Animal& animal=cat(dog)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	Dog dog;
	doSpeak(cat);
	doSpeak(dog);
}

int main()
{
	test01();

	return 0;
}