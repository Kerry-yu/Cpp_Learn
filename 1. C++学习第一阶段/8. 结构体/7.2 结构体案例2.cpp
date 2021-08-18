#include<iostream>
#include<string>

using namespace std;

//Ӣ�۽ṹ�嶨��
struct Hero
{
	string name;
	int age;
	string sex;
};

//ð��������
void bubbuleSort(struct Hero hArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (hArray[j].age > hArray[j + 1].age)
			{
				struct Hero temp = hArray[j];
				hArray[j] = hArray[j + 1];
				hArray[j + 1] = temp;
			}
		}
	}
}

//��ӡ�ṹ�����麯��
void printInfo(struct Hero hArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << hArray[i].name << "\t���䣺" << hArray[i].age << "\t�Ա�" << hArray[i].sex << endl;
	}
}

int main() {
	//1. �����ṹ������
	//2. �����д������Ӣ��
	struct Hero hArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};

	//3. ��ӡ����ǰ�Ľṹ������
	int len = sizeof(hArray) / sizeof(hArray[0]);
	cout << "����ǰ��" << endl;
	printInfo(hArray, len);

	//4. ð������
	bubbuleSort(hArray, len);

	//5. ��ӡ�����Ľṹ������
	cout << "�����" << endl;
	printInfo(hArray, len);
	return 0;
}