#include<iostream>
#include<string>

using namespace std;

//创建全局变量
int  g_a = 10;
int g_b = 10;
//const修饰的全局变量，全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	//创建普通局部变量
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;

	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
	cout << "全局变量给g_b的地址为：" << (int)&g_b << endl;

	//静态变量	在普通变量前面加static，属于静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量g_a的地址为：" << (int)&s_a << endl;
	cout << "静态变量给g_b的地址为：" << (int)&s_b << endl;

	//常量
	//字符串常量
	cout << "字符串常量给g_b的地址为：" << (int)&"hello world" << endl;

	//const修饰的变量
	//const修饰的全局变量	  const修饰的局部变量
	cout << "全局常量给c_g_b的地址为：" << (int)&c_g_b << endl;
	cout << "全局常量给c_g_b的地址为：" << (int)&c_g_b << endl;

	int c_l_a = 10;
	cout << "局部常量给c_l_a的地址为：" << (int)&c_l_a << endl;



	return 0;
}