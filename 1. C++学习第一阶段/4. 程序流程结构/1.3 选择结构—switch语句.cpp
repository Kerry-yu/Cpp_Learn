#include<iostream>

using namespace std;

int main() {

	int score = 0;
	cout << "�����������" << endl;
	cin >> score;
	cout << "����Ϊ��" << score;

	switch (score)
	{
	case 100:
		cout << "����" << endl;
		break;//�˳���ǰ��֧
	case 60:
		cout << "����" << endl;
		break;
	default:
		cout << "���ϸ�" << endl;
		break;
	}
	return 0;
}