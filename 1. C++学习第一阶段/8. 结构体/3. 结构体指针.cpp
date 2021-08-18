#include<iostream>
#include<string>

using namespace std;
//结构体指针

//定义结构体指针
struct Student
{
	string name;
	int age;
	int score;
};


int main() {
	//1. 创建学生结构体变量
	struct Student s = { "张三",18,100 };

	//2. 通过指针指向结构体变量
	struct Student* p = &s;

	//3. 通过指针访问结构体变量中的数据
	cout << "姓名：" << p->name << "  年龄：" << p->age << "  成绩：" << p->score;

	return 0;
}