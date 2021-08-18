#include <iostream>

using namespace std;

int main()
{
	//1. 创建bool数据类型
	bool flag = true;
	cout << flag << endl;

	flag = false;
	cout << flag << endl;

	//2. 查看bool类型所占内存空间
	cout << "布尔类型所占空间大小" << sizeof(flag);

	return 0;
}