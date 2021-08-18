#include<iostream>
#include<string>

using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

//值传递
void printStudent1(struct Student s)
{
	s.age = 80;
	cout << "子函数1中打印 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score << endl;

}

//地址传递
void printStudent2(struct Student* s)
{
	s->age = 50;
	cout << "子函数2中打印 姓名：" << s->name << " 年龄：" << s->age << " 成绩：" << s->score << endl;

}

int main() {
	//结构体做函数参数

	//创建结构体变量
	struct Student s;
	s.name = "张三";
	s.age = 20;
	s.score = 100;

	cout << "main函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score << endl;
	//值传递
	printStudent1(s);
	//地址传递
	printStudent2(&s);
	cout << "main函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score << endl;

	return 0;
}