#include<iostream>
#include<string>
#define MAX 100
using namespace std;

//�����ϵ�˽ṹ��
struct Person
{
	string m_Name;//����
	int m_Sex;//�Ա� 1 �� 2Ů
	int m_Age;//����
	string m_Phone;//�绰
	string m_Addr;//סַ
};
//���ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼����ϵ�˸���
	int m_Size;
};

//�˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1. �����ϵ��  *****" << endl;
	cout << "*****  2. ��ʾ��ϵ��  *****" << endl;
	cout << "*****  3. ɾ����ϵ��  *****" << endl;
	cout << "*****  4. ������ϵ��  *****" << endl;
	cout << "*****  5. �޸���ϵ��  *****" << endl;
	cout << "*****  6. �����ϵ��  *****" << endl;
	cout << "*****  0. �˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

//1. �����ϵ��
void addPerson(struct Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��
		//����
		string name;
		cout << "������������";
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		cout << "�������Ա�(1--��  2--Ů): ";
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "�����������������룺";
		}
		//����
		cout << "���������䣺";
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//�绰
		cout << "��������ϵ�绰��";
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//סַ
		cout << "�������ͥסַ��";
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");//��������
	}
}
//2. ��ʾ������ϵ��
void showPerson(struct Addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��; �����Ϊ0,��ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}
//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
int isExist(struct Addressbooks* abs, string name)//����1��ͨѶ¼  ����2���Ա�����
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;//���������û�ҵ�������-1
}
//3. ɾ��ָ����ϵ��
void deletePerson(struct Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��: ";
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//����ͨѶ¼����Ա��
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}
//4. ����ָ����ϵ����Ϣ
void findPerson(struct Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��������";
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����
	int ret = isExist(abs, name);

	if (ret != -1)//�ҵ���ϵ��
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else //δ�ҵ���ϵ��
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}
//5. �޸�ָ����ϵ����Ϣ
void modifyPerson(struct Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��������";
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)//�ҵ���ϵ��
	{
		//����
		string name;
		cout << "������������";
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�
		cout << "�������Ա�(1--��  2--Ů): ";
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "�����������������룺";
		}
		//����
		cout << "���������䣺";
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//�绰
		cout << "��������ϵ�绰��";
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//סַ
		cout << "�������ͥסַ��";
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ�!" << endl;
	}
	else //δ�ҵ���ϵ��
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}
//6. ���������ϵ��
void cleanPerson(struct Addressbooks* abs)
{
	abs->m_Size = 0;//����ǰ��¼����ϵ��������Ϊ0
	cout << "ͨѶ¼����գ�" << endl;
	system("pause");
	system("cls");
}
int main()
{
	//����ͨѶ¼�ṹ�����
	struct Addressbooks abs;
	//��ʼ��
	abs.m_Size = 0;

	int select = 0;//�����û�����ı���

	while (1)
	{
		//�˵�����
		showMenu();

		cout << "ѡ���ܣ�";
		cin >> select;
		switch (select)
		{
		case 1:	//1. �����ϵ��
			addPerson(&abs);//���õ�ַ���ݿ����޸�ʵ��
			break;
		case 2:	//2. ��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:	//3. ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4:	//4. ������ϵ��
			findPerson(&abs);
			break;
		case 5:	//5. �޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:	//6. �����ϵ��
			cleanPerson(&abs);
			break;
		case 0:	//0. �˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��!" << endl;
			return 0;
		default:
			break;
		}
	}

	return 0;
}