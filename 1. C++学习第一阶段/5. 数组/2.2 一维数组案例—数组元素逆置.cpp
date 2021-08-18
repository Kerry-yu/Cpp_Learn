#include<iostream>

using namespace std;

int main() {
	//实现数组元素的逆置

	//1. 创建数组
	int arr[5] = { 1,3,2,5,4 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}

	//2. 实现逆置
	/*
		2.1 记录起始下标位置
		2.2 记录结束下标位置
		2.3 起始下标与结束下标的元素互换
		2.4 起始位置++，结束位置--
		2.5 循环执行2.1，直到起始位置>=结束位置
	*/
	int start = 0;//起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//结束下标

	while (start < end) {
		//实现元素互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//下标更新
		start++;
		end--;
	}

	//打印逆置后的数组
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}

	return 0;
}