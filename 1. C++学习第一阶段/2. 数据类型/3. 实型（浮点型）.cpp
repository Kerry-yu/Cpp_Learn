#include <iostream>
using namespace std;

int main()
{
	//默认情况下，输出一个小数，会显示出6位有效数字
	float f1 = 3.1415926f;
	cout << "f1=" << f1 << endl;
	double d1 = 3.1415926;
	cout << "d1=" << d1 << endl;

	//科学计数法
	float f2 = 3e2;	//3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;
	cout << "f3=" << f3 << endl;

	return 0;
}