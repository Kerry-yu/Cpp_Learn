#include<iostream>

using namespace std;

int main() {

	//嵌套循环实现星图

	//外层执行一次，内层执行一周
	//外层循环
	/*for (int i = 0; i < 10; i++) {
		//内层循环
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}*/


	//练习案例：乘法口诀表
	for (int i = 0; i <= 9; i++)
	{
		//cout << i << endl;
		for (int j = 1; j <= i; j++) {
			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}

	return 0;
}