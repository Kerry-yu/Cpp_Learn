#include<iostream>

using namespace std;

int main() {
	//空指针
	//1. 空指针用于给指针变量进行初始化
	int* p = NULL;

	//2. 空指针不可以进行访问
	//内存编号0~255为系统占用内存，不允许用户访问
	cout << *p << endl;

	return 0;
}
