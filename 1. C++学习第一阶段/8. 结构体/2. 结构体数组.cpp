#include<iostream>
#include<string>

using namespace std;

//�ṹ������

//1. ����ṹ��
struct Student
{
	string name;
	int age;
	int score;
};


int main() {
	//2. �����ṹ������
	struct Student stuArray[3] =
	{
		{"����",18,100},
		{"����",19,60},
		{"����",17,90}
	};
	//3. �����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << stuArray[i].name << "\t";
		cout << "���䣺" << stuArray[i].age << "\t";
		cout << "�ɼ���" << stuArray[i].score << "\t";
		cout << endl;
	}

	return 0;
}