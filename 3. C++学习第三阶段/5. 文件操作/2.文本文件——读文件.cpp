#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//�ı��ļ�	���ļ�
void test01()
{
	//1. ����ͷ�ļ�

	//2. ����������
	ifstream ifs;

	//3. ���ļ����ж��Ƿ�򿪳ɹ� 
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4. ������
	//��һ�ַ�ʽ
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//�ڶ���
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//������
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//������
	char c;
	while ((c = ifs.get()) != EOF)//EOF=end of file
	{
		cout << c;
	}

	//5. �ر��ļ�
	ifs.close();
}

int main()
{
	test01();
	return 0;
}