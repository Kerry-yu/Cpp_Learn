#include<iostream>
#include<string>

using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

//ֵ����
void printStudent1(struct Student s)
{
	s.age = 80;
	cout << "�Ӻ���1�д�ӡ ������" << s.name << " ���䣺" << s.age << " �ɼ���" << s.score << endl;

}

//��ַ����
void printStudent2(struct Student* s)
{
	s->age = 50;
	cout << "�Ӻ���2�д�ӡ ������" << s->name << " ���䣺" << s->age << " �ɼ���" << s->score << endl;

}

int main() {
	//�ṹ������������

	//�����ṹ�����
	struct Student s;
	s.name = "����";
	s.age = 20;
	s.score = 100;

	cout << "main�����д�ӡ ������" << s.name << " ���䣺" << s.age << " �ɼ���" << s.score << endl;
	//ֵ����
	printStudent1(s);
	//��ַ����
	printStudent2(&s);
	cout << "main�����д�ӡ ������" << s.name << " ���䣺" << s.age << " �ɼ���" << s.score << endl;

	return 0;
}