#include<iostream>
#include<string>
using namespace std;

//���캯���ķ���͵���
//����
class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	Person(int a)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	//�������캯��
	Person(const Person& p)
	{
		//������������ϵ��������ԣ���������������
		age = p.age;
	}
	//��������
	~Person()
	{
		cout << "Person��������������" << endl;
	}

public:
	int age = 0;
};

//����
void test01()
{
	//1. ���ŷ�
	Person p1;//Ĭ�Ϲ��캯������
	Person p2(10);//�вι��캯��
	Person p3(p2);//�вι��캯��
	//ע������һ
	//����Ĭ�Ϲ��캯��ʱ����Ҫ�ӣ���
	//��Ϊ��������� Person p() ��������������������Ϊ�ڴ�������

	/*cout << "p2������Ϊ��" << p2.age << endl;
	cout << "p3������Ϊ��" << p3.age << endl;*/

	//2. ��ʾ��
	Person p4;
	Person p5 = Person(10);//�вι���
	Person p6 = Person(p2);//��������

	Person(10);//���������ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//ע���������
	//��Ҫ�ÿ������캯����ʼ��һ����������		����������ΪPerson(p3) == Person p3

	//3. ��ʽת����
	Person p7 = 10;//�൱��д��Person p4 = Person(10)
	Person p8 = p7;//��������

}
int main()
{

	return 0;
}