#include<iostream>

using namespace std;

int main() {
	//�Ӽ��˳�
	int a1 = 10;
	int b1 = 3;
	double a2 = 5.0;
	double b2 = 2.5;
	double b3 = 2.3;

	cout << +a1 << endl;
	cout << -b1 << endl;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//���ͱ������������������
	cout << a2 / b2 << endl;
	cout << a2 / b3 << endl;//�����ͱ����������������Ϊ���ͣ�������Ϊ������

	//ȡģ���㡪������������
	int c1 = 10;
	int d1 = 3;
	int d2 = 20;

	cout << c1 % d1 << endl;
	cout << c1 % d2 << endl;

	//��������
	//1. ǰ�õ���
	int a = 10;
	++a;
	cout << "a=" << a << endl;

	//���õ���
	int b = 10;
	b++;
	cout << "b=" << b << endl;

	//ǰ�úͺ��õ�����
	//ǰ�õ���  ���ñ���+1  Ȼ����б��ʽ����
	int c = 10;
	int d = ++c * 10;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;


	//���õ���  �Ƚ��б��ʽ���㣬���ñ���+1
	int e = 10;
	int f = e++ * 10;
	cout << "e=" << e << endl;
	cout << "f=" << f << endl;

	return 0;
}