#include<iostream>
#include<string>
using namespace std;

//���һ��ѧ���࣬������������ѧ��
//���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

//���ѧ����
class student
{
public:	//����Ȩ��
	//���е����Ժ���Ϊ ͳһ��Ϊ��Ա
	//����	��Ա����	��Ա����
	//��Ϊ	��Ա����	��Ա����

	//����
	string m_Name;//����
	int m_Id;//ѧ��

	//��Ϊ
	//��ʾ������ѧ��
	void showStudent()
	{
		cout << "����:" << m_Name << "\t ѧ�ţ�" << m_Id << endl;
	}
	//��������ֵ
	void setName(string name)
	{
		m_Name = name;
	}
	//��ѧ�Ÿ�ֵ
	void setId(int id)
	{
		m_Id = id;
	}
};
int main()
{
	//ʵ��������
	student s1;
	//��s1����������Ը�ֵ����
	s1.setName("����");
	s1.setId(1);
	//��ʾѧ����Ϣ
	s1.showStudent();

	return 0;
}