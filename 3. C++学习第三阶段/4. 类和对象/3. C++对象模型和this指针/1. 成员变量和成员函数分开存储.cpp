#include<iostream>
#include<string>
using namespace std;

class Person
{
	int m_A;//�Ǿ�̬��Ա����	������Ķ�����
	static int m_B;//��̬��Ա����		��������Ķ�����
	void func() {}//�Ǿ�̬��Ա����		��������Ķ�����
	static void func2() {}//��̬��Ա����	��������Ķ�����
};

void test01()
{
	Person p;
	//�ն���ռ�õ��ڴ�ռ䣺1
	//C++��������Ϊÿ���ն���Ҳ����1���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���Ӧ����һ����һ�޶���λ��
	cout << "size of p:" << sizeof(p) << endl;
}

void test02()
{
	Person p;
	cout << "size of p:" << sizeof(p) << endl;

}
int main()
{
	//test01();
	test02();

	return 0;
}