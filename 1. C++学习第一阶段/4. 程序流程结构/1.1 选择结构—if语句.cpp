#include<iostream>

using namespace std;

int main() {

	//ѡ��ṹ	if���
	//���и�ʽif���
	/*int score = 0;
	cout << "�����������" << endl;
	cin >> score;
	cout << "����Ϊ��" << score;
	if (score > 85) {
		cout << ",�ɼ�Ϊ����" << endl;
	}*/

	//���и�ʽif���
	/*int score = 0;
	cout << "�����������" << endl;
	cin >> score;
	cout << "����Ϊ��" << score;
	if (score > 85) {
		cout << ", �ɼ�Ϊ����" << endl;
	}
	else {
		cout << ", �ɼ�������" << endl;
	}*/

	//������if���
	/*int score = 0;
	cout << "�����������" << endl;
	cin >> score;
	cout << "����Ϊ��" << score;
	if (score > 85) {
		cout << ", �ɼ�Ϊ����" << endl;
	}
	else if (score > 60 && score < 85) {
		cout << ", �ɼ�Ϊ�ϸ�" << endl;
	}
	else {
		cout << ", �ɼ����ϸ�" << endl;
	}*/

	//Ƕ��if���
	int score = 0;
	cout << "�����������" << endl;
	cin >> score;
	cout << "����Ϊ��" << score;
	if (score > 85) {
		cout << ", �ɼ�Ϊ����" << endl;
		if (score > 95) {
			cout << "һ�Ƚ�" << endl;
		}
		else if (score > 90 && score < 95) {
			cout << "���Ƚ�" << endl;
		}
		else {
			cout << "���Ƚ�" << endl;
		}
	}
	else if (score > 60 && score < 85) {
		cout << ", �ɼ�Ϊ�ϸ�" << endl;
	}
	else {
		cout << ", �ɼ����ϸ�" << endl;
	}

	return 0;
}