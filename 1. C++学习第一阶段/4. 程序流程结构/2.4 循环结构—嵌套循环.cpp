#include<iostream>

using namespace std;

int main() {

	//Ƕ��ѭ��ʵ����ͼ

	//���ִ��һ�Σ��ڲ�ִ��һ��
	//���ѭ��
	/*for (int i = 0; i < 10; i++) {
		//�ڲ�ѭ��
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}*/


	//��ϰ�������˷��ھ���
	for (int i = 0; i <= 9; i++)
	{
		//cout << i << endl;
		for (int j = 1; j <= i; j++) {
			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}

	return 0;
}