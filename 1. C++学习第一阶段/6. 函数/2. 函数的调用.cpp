#include<iostream>

using namespace std;

//����ӷ�����
//��������ʱ��num1��num2Ϊ��ʽ����������ʵ����
int add(int num1, int num2) {
	int sum = num1 + num2;

	return sum;
}
int main() {

	//main�����ֵ���add����
	int a = 10;
	int b = 23;
	//���������﷨����������(����)
	//a��bΪ ʵ�ʲ���
	//��������ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	int c = add(a, b);
	cout << "c=" << c << endl;

	return 0;
}