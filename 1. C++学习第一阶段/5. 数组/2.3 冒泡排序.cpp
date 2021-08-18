#include<iostream>

using namespace std;

int main() {

	//利用冒泡排序实现升序序列
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };

	//排序前数组
	cout << "排序前：";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << "\t";
	}

	//开始冒泡排序
	//总排轮数= 元素个数-1
	for (int i = 0; i < 9 - 1; i++)
	{
		//内层循环对比	次数=元素个数-循环轮数-1
		for (int j = 0; j < 9 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//打印排序后结果
	cout << endl << "排序后：";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << "\t";
	}

	return 0;
}