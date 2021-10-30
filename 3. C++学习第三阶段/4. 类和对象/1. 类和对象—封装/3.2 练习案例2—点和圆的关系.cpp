#include<iostream>
#include<string>
using namespace std;
//���Բ��ϵ����
//����
class Point
{
public:
	//����x
	void setX(int x)
	{
		m_X = x;
	}
	//��ȡx
	int getX()
	{
		return m_X;
	}
	//����y
	void setY(int y)
	{
		m_Y = y;
	}
	//��ȡy
	int getY()
	{
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};
//Բ��
class Circle
{
public:
	//���ð뾶
	void setR(int r)
	{
		m_R = r;
	}
	//��ȡ�뾶
	int getR()
	{
		return m_R;
	}
	//����Բ��
	void setCenter(Point center)
	{
		m_Center = center;
	}
	//��ȡԲ��
	Point getCenter()
	{
		return m_Center;
	}
private:
	int m_R;//�뾶
	Point m_Center;//Բ��
};

//�жϵ��Բ��ϵ
void isInCircle(Circle& c, Point& p)
{
	//��������֮������ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();

	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
int main()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//������
	Point p1;
	Point p2;
	Point p3;
	p1.setX(10);
	p1.setY(10);
	p2.setX(10);
	p2.setY(9);
	p3.setX(10);
	p3.setY(11);

	//�ж�
	isInCircle(c, p1);
	isInCircle(c, p2);
	isInCircle(c, p3);
	return 0;
}