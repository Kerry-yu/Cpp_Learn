#include<iostream>
#include<ctime>
using namespace std;

int main() {

	//whileѭ��
	//����Ļ�д�ӡ0-9��10������
	/*int num = 0;
	while (num < 10) {
		cout << num << endl;
		num++;
	}*/

	//��������Ϸ
	//1. ϵͳ���������
	srand(unsigned int)time(NULL);
	int num = rand() % 100 + 1;//����1-100�������

	//2. ��ҽ��в²�
	int val = 0;
	cout << "������²��ֵ:";
	while (1) {
		cin >> val;
		//3. �ж���ҵĲ²�
		//�´�	��ʾ��Ϣ��������С	���·��ص�2��
		if (val > num) {
			cout << "�´���,���������룺";
		}
		else if (val < num) {
			cout << "��С��,���������룺";
		}
		else {
			//�¶�	�˳���Ϸ
			cout << "�¶�����";
			break;
		}
	}


	return 0;
}