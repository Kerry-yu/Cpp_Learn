#include<iostream>
#include<string>

using namespace std;

int main() {

	//��ά���鰸�� - ���Գɼ�ͳ��

	//1. ������ά����
	int score[3][3] = { {100,100,100},{90,50,100},{60,70,80} };
	string names[3] = { "����","����","����" };
	//ͳ��ÿ���˵��ܺͷ���
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;//�����ۺ�
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
			//cout << score[i][j] << "\t";
		}
		cout << names[i] << "���ܷ�Ϊ��" << sum << endl;
	}
	return 0;
}