#include<iostream>

using namespace std;

int main() {
	//指针所占内存空间
	int a = 10;
	int* p = &a;

	//32位操作系统下，指针类型占4个字节
	//64位操作系统下，指针类型占8个字节
	cout << "sizeof(int *)" << sizeof(int*) << endl;
	cout << "sizeof(int *)" << sizeof(float*) << endl;
	cout << "sizeof(int *)" << sizeof(double*) << endl;
	cout << "sizeof(int *)" << sizeof(char*) << endl;

	return 0;
}
