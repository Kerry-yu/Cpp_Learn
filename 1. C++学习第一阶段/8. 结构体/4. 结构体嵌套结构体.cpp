#include<iostream>
#include<string>

using namespace std;

//定义学生结构体
struct Student
{
	string name;
	int age;
	int score;
};
//定义老师结构体
struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;
};
int main() {
	//结构体嵌套结构体
	//创建老师变量
	Teacher T;
	T.id = 1000;
	T.name = "大王";
	T.age = 30;
	T.stu.name = "小王";
	T.stu.age = 18;
	T.stu.score = 100;

	cout << "老师姓名：" << T.name << "  老师编号：" << T.id << "  老师年龄：" << T.age
		<< "  老师的学生姓名：" << T.stu.name << " 老师的学生的年龄：" << T.stu.age
		<< "  老师辅导学生的分数:" << T.stu.score;

	return 0;
}