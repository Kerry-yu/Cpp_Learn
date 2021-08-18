#include<iostream>

using namespace std;

int main() {

	//do...while循环
	//在屏幕中打印0-9这10个数字
	/*int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);*/

	//练习案例:水仙花数
	/*1. 将所有的3位数进行输出
	  2. 在所有3位数中找到水仙花数
		 水仙花数判断：个位^3+十位^3+百位^3=本身
			获取个位：153%10=3	对v 数字进行模10运算
			获取十位：153/10=15	15%10=5	对数字先整除10，再模10
			获取百位：153/100=1	对数字整除100*/


			//1. 打印所有数字
	int num = 100;
	do {

		//2. 找到水仙花数
		int a = 0;//个位
		int b = 0;//十位
		int c = 0;//百位

		a = num % 10;//获取数字个位
		b = num / 10 % 10;//获取数字十位
		c = num / 100;//获取数字百位
		if (a * a * a + b * b * b + c * c * c == num) {
			cout << num << endl;
		}
		num++;
	} while (num < 1000);


	return 0;
}