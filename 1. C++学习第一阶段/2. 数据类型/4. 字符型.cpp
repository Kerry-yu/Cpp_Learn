#include <iostream>
using namespace std;

int main()
{
	//1. �ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;

	//2. �ַ��ͱ�����ռ�ڴ��С
	cout << "char�ַ��ͱ�����ռ�ڴ�" << sizeof(ch);

	//3. �ַ��ͱ�����������
	//char ch2 = "b"; //�����ַ��ͱ���ʱҪ�õ�����
	//char ch2 = 'abcdef';//�����ַ��ͱ�������������ֻ����һ���ַ�

	//4. �ַ��ͱ�����ӦASCII����
	//a-97 A-65
	cout << (int)ch << endl;

	return 0;
}