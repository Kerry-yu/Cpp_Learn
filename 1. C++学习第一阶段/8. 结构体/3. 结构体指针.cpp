#include<iostream>
#include<string>

using namespace std;
//�ṹ��ָ��

//����ṹ��ָ��
struct Student
{
	string name;
	int age;
	int score;
};


int main() {
	//1. ����ѧ���ṹ�����
	struct Student s = { "����",18,100 };

	//2. ͨ��ָ��ָ��ṹ�����
	struct Student* p = &s;

	//3. ͨ��ָ����ʽṹ������е�����
	cout << "������" << p->name << "  ���䣺" << p->age << "  �ɼ���" << p->score;

	return 0;
}