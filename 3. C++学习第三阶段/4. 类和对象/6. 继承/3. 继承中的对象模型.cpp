#include<iostream>
#include<string>
using namespace std;

//�̳��еĶ���ģ��
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
private:
	int m_D;
};

void test01()
{
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա���Ա�����̳���ȥ�ˣ����Ǳ����������أ������Է���
	Son son;
	cout << "size of son = " << sizeof(son) << endl;
}
int main()
{
	test01();

	return 0;
}