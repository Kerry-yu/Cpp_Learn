#include<iostream>

using namespace std;

int main() {
	//1. const修饰指针
	int a = 10;
	int b = 10;
	const int* p = &a;//指针指向的值不可以改，指针的指向可以更改

	//*p = 20;//错误：表达式必须是可修改的左值
	p = &b;//错误：表达式必须是可修改的左值

	//2. const修饰常量
	int* const p2 = &a;//指针的指向不可以改，指针指向的值可以改

	//p2 = &a;//错误：表达式必须是可修改的左值
	*p2 = 200;//正确

	//3. const修饰指针和常量
	const int* const p3 = &a;//指针的指向和指针指向的值都不可以更改
	//p3 = &a;//错误：表达式必须是可修改的左值
	//*p3 = 200;//错误：表达式必须是可修改的左值

	return 0;
}
