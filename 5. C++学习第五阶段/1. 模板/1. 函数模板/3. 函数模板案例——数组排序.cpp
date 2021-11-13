#include<iostream>
#include<string>
using namespace std;

//实现通用	对数组进行排序的函数
//规则	从大到小
//算法	选择
//测试	char数组	、int数组

//交换函数模板
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//排序算法
template<typename T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//认定最大值下标
		for (int j = i + 1; j < len; j++)
		{
			//认定的最大值比遍历出的数值要小，说明 j下标的元素才是真正的最大值
			if (arr[max] < arr[j])
			{
				max = j;//更新最大值下标
			}
		}
		if (max != i)
		{
			//交换max和i元素
			mySwap(arr[max], arr[i]);
		}
	}
}

//打印数组模板
template<typename T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//测试char数组
void test01()
{
	char charArr[] = "bacfe";
	int num = sizeof(charArr) / sizeof(char);

	mySort(charArr, num);
	printArray(charArr, num);
}

//测试int数组
void test02()
{
	int intArr[] = { 7,5,8,6,9,15,2,4 };
	int num = sizeof(intArr) / sizeof(int);

	mySort(intArr, num);
	printArray(intArr, num);
}
int main()
{
	test01();
	test02();

	return 0;
}