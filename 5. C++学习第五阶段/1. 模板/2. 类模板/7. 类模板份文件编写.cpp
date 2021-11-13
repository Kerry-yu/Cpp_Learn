#include<iostream>
#include<string>
using namespace std;
//第一种解决方式	直接包含 源文件
//#include "person.cpp"

//第二种解决方式，将.h和.cpp中的内容写在一起，将后缀名改为.hpp
#include "person.hpp"

//类模板分文件编写以及解决问题

void test01()
{
	Person<string, int> p("张三", 18);
	p.showPerson();
}

int main()
{
	test01();

	return 0;
}