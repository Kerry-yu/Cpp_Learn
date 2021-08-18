#include<iostream>
#include<string>

using namespace std;

//英雄结构体定义
struct Hero
{
	string name;
	int age;
	string sex;
};

//冒泡排序函数
void bubbuleSort(struct Hero hArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (hArray[j].age > hArray[j + 1].age)
			{
				struct Hero temp = hArray[j];
				hArray[j] = hArray[j + 1];
				hArray[j + 1] = temp;
			}
		}
	}
}

//打印结构体数组函数
void printInfo(struct Hero hArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << hArray[i].name << "\t年龄：" << hArray[i].age << "\t性别：" << hArray[i].sex << endl;
	}
}

int main() {
	//1. 创建结构体数组
	//2. 数组中存放无名英雄
	struct Hero hArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	//3. 打印排序前的结构体数组
	int len = sizeof(hArray) / sizeof(hArray[0]);
	cout << "排序前：" << endl;
	printInfo(hArray, len);

	//4. 冒泡排序
	bubbuleSort(hArray, len);

	//5. 打印排序后的结构体数组
	cout << "排序后" << endl;
	printInfo(hArray, len);
	return 0;
}