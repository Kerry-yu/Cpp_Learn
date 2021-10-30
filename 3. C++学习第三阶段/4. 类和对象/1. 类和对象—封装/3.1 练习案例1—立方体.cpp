#include<iostream>
#include<string>
using namespace std;

//�����������
//1. ������������
//2. ������Ժ���Ϊ
//3. ��ȡ��������������
//4. �ֱ�����ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
class Cube
{
public:
	//���ó�
	void setL(int l)
	{
		m_L = l;
	}
	//��ȡ��
	int getL()
	{
		return m_L;
	}
	//���ÿ�
	void setW(int w)
	{
		m_W = w;
	}
	//��ȡ��
	int getW()
	{
		return m_W;
	}
	//���ø�
	void setH(int h)
	{
		m_H = h;
	}
	//��ȡ��
	int getH()
	{
		return m_H;
	}
	//��ȡ���������
	int cubeS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
	}
	//��ȡ���������
	int cubeV()
	{
		return m_L * m_W * m_H;
	}

	//���ó�Ա�����ж� �����������Ƿ����
	bool isSameByClass(Cube& c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		else
			return false;
	}

private:
	int m_L;
	int m_W;
	int m_H;
};
//����ȫ�ֺ����ж� �����������Ƿ����
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	else
		return false;
}

int main()
{
	//�������������
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "c1�����Ϊ��" << c1.cubeS() << endl;
	cout << "c1�����Ϊ��" << c1.cubeV() << endl;

	//�����ڶ���������
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	//����ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�" << endl;

	}

	//���ó�Ա�����ж�
	bool ret2 = c1.isSameByClass(c2);
	if (ret2)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�" << endl;

	}
	return 0;
}