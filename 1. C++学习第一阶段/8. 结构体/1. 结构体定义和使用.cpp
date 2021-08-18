#include<iostream>

using namespace std;

//结构体定义
struct Student
{
	//成员列表
	string name;//姓名
	int age;//年龄
	int score;//分数
}s3;//结构体变量创建方式3

//2. 结构体变量创建方式
int main() {
	//2.1 struct 结构体名 变量名
	struct Student s1;//struct关键字可以省略
	//通过.访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << "年龄：" << s1.age << "成绩：" << s1.score << endl;

	//2.2 struct 结构体名 变量名 = {成员1值，成员2值...}
	struct Student s2 = { "李四",19,80 };
	cout << "姓名：" << s2.name << "年龄：" << s2.age << "成绩：" << s2.score << endl;

	//2.3 定义结构体时顺便创建结构体变量
	s3.name = "李四";
	s3.age = 20;
	s3.score = 90;
	cout << "姓名：" << s3.name << "年龄：" << s3.age << "成绩：" << s3.score << endl;

	return 0;
}