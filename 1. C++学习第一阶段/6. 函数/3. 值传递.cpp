#include<iostream>

using namespace std;

//ֵ����
//���庯����ʵ���������ֽ��н����ĺ���
void swap(int num1, int num2) {
	cout << "�βν���ǰ��" << endl;
	cout << "num2= " << num1 << endl;
	cout << "num1= " << num1 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "�βν�����" << endl;
	cout << "num2= " << num1 << endl;
	cout << "num1= " << num1 << endl;
}

int main() {
	int a = 10;
	int b = 20;

	cout << "ʵ�ν���ǰ��" << endl;
	cout << "num2= " << a << endl;
	cout << "num1= " << b << endl;
	//��������ֵ����ʱ���������βη����ı䣬������Ӱ��ʵ��
	swap(a, b);

	cout << "ʵ�ν�����" << endl;
	cout << "num2= " << a << endl;
	cout << "num1= " << b << endl;

	return 0;
}