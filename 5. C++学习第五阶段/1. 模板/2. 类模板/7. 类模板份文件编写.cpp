#include<iostream>
#include<string>
using namespace std;
//��һ�ֽ����ʽ	ֱ�Ӱ��� Դ�ļ�
//#include "person.cpp"

//�ڶ��ֽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp
#include "person.hpp"

//��ģ����ļ���д�Լ��������

void test01()
{
	Person<string, int> p("����", 18);
	p.showPerson();
}

int main()
{
	test01();

	return 0;
}