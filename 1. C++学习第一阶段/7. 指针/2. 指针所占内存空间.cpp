#include<iostream>

using namespace std;

int main() {
	//ָ����ռ�ڴ�ռ�
	int a = 10;
	int* p = &a;

	//32λ����ϵͳ�£�ָ������ռ4���ֽ�
	//64λ����ϵͳ�£�ָ������ռ8���ֽ�
	cout << "sizeof(int *)" << sizeof(int*) << endl;
	cout << "sizeof(int *)" << sizeof(float*) << endl;
	cout << "sizeof(int *)" << sizeof(double*) << endl;
	cout << "sizeof(int *)" << sizeof(char*) << endl;

	return 0;
}
