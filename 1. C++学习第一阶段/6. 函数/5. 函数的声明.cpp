#include<iostream>

using namespace std;

//����������
int max(int a, int b);

int main() {

	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;
	return 0;
}

//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ
int max(int a, int b) {
	return a > b ? a : b;
}
