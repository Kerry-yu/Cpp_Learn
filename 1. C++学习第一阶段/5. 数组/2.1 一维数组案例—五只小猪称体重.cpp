#include<iostream>

using namespace std;

int main() {

	//1. 创建5只小猪体重的数组
	int arr[5] = { 300,350,200,400,250 };

	//2. 从数组中找到最大值
	int max = arr[0];//先认定一个最大值为数组首元素
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//若访问的数组元素大于max，更新max为该数组元素
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "最重的小猪体重为：" << max << endl;


	return 0;
}