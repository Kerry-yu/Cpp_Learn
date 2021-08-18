#include<iostream>

using namespace std;

//函数常见样式
//1. 无参无返
void test01() {
	cout << "this is test01" << endl;
}

//2. 有参无返
void test02(int a) {
	cout << "this is test02 a=" << a << endl;
}

//3. 无参有返
int test03() {
	cout << "this is test03";
	return 1000;
}

//4. 有参有返
int test04(int a) {
	cout << "this is test04 a= " << a << endl;
	return a;
}

int main() {

	//1. 无参无返函数的调用
	test01();

	//2. 有参无返函数的调用
	test02(100);

	//3. 无参有返函数的调用
	int num1 = test03();
	cout << "num1= " << num1 << endl;

	//4. 有参有返函数的调用
	int num2 = test04(10000);
	cout << "num2= " << num1 << endl;

	return 0;
}

