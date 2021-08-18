#include<iostream>
#include<string>

using namespace std;

//结构体数组

//1. 定义结构体
struct Student
{
	string name;
	int age;
	int score;
};


int main() {
	//2. 创建结构体数组
	struct Student stuArray[3] =
	{
		{"张三",18,100},
		{"李四",19,60},
		{"王五",17,90}
	};
	//3. 变量结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuArray[i].name << "\t";
		cout << "年龄：" << stuArray[i].age << "\t";
		cout << "成绩：" << stuArray[i].score << "\t";
		cout << endl;
	}

	return 0;
}