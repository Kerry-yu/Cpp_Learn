#include<iostream>
#include<string>

using namespace std;
//���һ��Բ�࣬��Բ���ܳ�
const double PI = 3.14;

class Circle
{
	//����Ȩ��
public://����Ȩ��

	//����
	int m_r;//�뾶

	//��Ϊ
	double calculateZC()//��ȡԲ���ܳ�
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//ͨ��Բ�� ���������Բ������
	Circle c1;
	//��Բ��������Խ��и�ֵ
	c1.m_r = 10;

	cout << "Բ�ܳ�Ϊ��" << c1.calculateZC() << endl;

	return 0;
}