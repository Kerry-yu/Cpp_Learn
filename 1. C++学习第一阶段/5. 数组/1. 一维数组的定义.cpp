#include<iostream>

using namespace std;

int main() {

	//数组

	//1. 数据类型 数组名 [数组长度]
	//数组下标从0开始
	int arr[5];
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 10;
	arr[4] = 10;

	//访问数组元素
	cout << arr[0] << endl;

	//2. 数据类型 数组名 [数组长度] = { 值1，值2 ...}
	//若初始化数据没有全部填写，剩下的会用0填写
	int arr2[5] = { 10,20,30,40 };
	cout << arr2[5] << endl;

	//利用循环，输出数组中的元素
	for (int i = 0; i < 5; i++)
	{
		cout << arr[2] << endl;
	}

	//3. 数据类型 数组名[] = {值1，值2 ....}
	int arr3[] = { 10,20,30,40,50,60 };

	return 0;
}