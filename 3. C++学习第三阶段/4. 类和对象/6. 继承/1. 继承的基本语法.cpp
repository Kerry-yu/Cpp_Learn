#include<iostream>
#include<string>
using namespace std;

//��ͨʵ��ҳ��
//javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++��������ߣ�" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python
//{
//	 
//};

//�̳�ʵ��ҳ��
//����ҳ��
class Basepage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��(����ͷ��)" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++��������ߣ�" << endl;
	}
};

//javaҳ��
class java : public Basepage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
//pythonҳ��
class python :public Basepage
{
public:
	void content()
	{
		cout << "pythonѧ����Ƶ" << endl;
	}
};
//c++ҳ��
class cpp :public Basepage
{
public:
	void content()
	{
		cout << "cppѧ����Ƶ" << endl;
	}
};

void test01()
{
	cout << "Java������Ƶҳ�����£�" << endl;
	java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
}
int main()
{
	test01();

	return 0;
}