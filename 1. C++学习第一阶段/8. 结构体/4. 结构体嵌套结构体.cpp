#include<iostream>
#include<string>

using namespace std;

//����ѧ���ṹ��
struct Student
{
	string name;
	int age;
	int score;
};
//������ʦ�ṹ��
struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;
};
int main() {
	//�ṹ��Ƕ�׽ṹ��
	//������ʦ����
	Teacher T;
	T.id = 1000;
	T.name = "����";
	T.age = 30;
	T.stu.name = "С��";
	T.stu.age = 18;
	T.stu.score = 100;

	cout << "��ʦ������" << T.name << "  ��ʦ��ţ�" << T.id << "  ��ʦ���䣺" << T.age
		<< "  ��ʦ��ѧ��������" << T.stu.name << " ��ʦ��ѧ�������䣺" << T.stu.age
		<< "  ��ʦ����ѧ���ķ���:" << T.stu.score;

	return 0;
}