#include<iostream>
#include<string>

using namespace std;
//��������
//ʹ�ó��������������βΣ���ֹ�����

//��ӡ���ݺ���
void showValue(const int& val)
{
	cout << "val=" << val << endl;
}

int main()
{

	int a = 10;
	//int& ref = 10;//���ñ�����һ��Ϸ��Ŀռ�
	//����const֮�󣬱������������޸� int temp=10; const int& ref = temp;
	const int& ref = 10;
	//ref = 20;//����const֮���Ϊֻ�����������޸�
	int a = 100;
	showValue(a);

	return 0;
}