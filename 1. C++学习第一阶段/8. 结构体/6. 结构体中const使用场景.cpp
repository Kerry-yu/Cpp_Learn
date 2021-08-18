#include<iostream>
#include<string>

using namespace std;

//const使用场景
struct Student
{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudent(const Student* s)//const使用场景，加入const防止误操作
{
	//s->age = 150;//加入const后无法修改
	cout << "姓名：" << s->name << "\t年龄：" << s->age << "\t成绩：" << s->score;
}

int main() {
	struct Student s = { "张三",19,100 };

	//通过函数打印结构体变量信息
	printStudent(&s);

	return 0;
}