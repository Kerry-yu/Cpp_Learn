#include<iostream>
#include<string>

using namespace std;

//constʹ�ó���
struct Student
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudent(const Student* s)//constʹ�ó���������const��ֹ�����
{
	//s->age = 150;//����const���޷��޸�
	cout << "������" << s->name << "\t���䣺" << s->age << "\t�ɼ���" << s->score;
}

int main() {
	struct Student s = { "����",19,100 };

	//ͨ��������ӡ�ṹ�������Ϣ
	printStudent(&s);

	return 0;
}