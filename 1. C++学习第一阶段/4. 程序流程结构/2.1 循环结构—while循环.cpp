#include<iostream>
#include<ctime>
using namespace std;

int main() {

	//while循环
	//在屏幕中打印0-9这10个数字
	/*int num = 0;
	while (num < 10) {
		cout << num << endl;
		num++;
	}*/

	//猜数字游戏
	//1. 系统生成随机数
	srand(unsigned int)time(NULL);
	int num = rand() % 100 + 1;//生成1-100的随机数

	//2. 玩家进行猜测
	int val = 0;
	cout << "请输入猜测的值:";
	while (1) {
		cin >> val;
		//3. 判断玩家的猜测
		//猜错	提示信息：过大或过小	重新返回第2步
		if (val > num) {
			cout << "猜大了,请重新输入：";
		}
		else if (val < num) {
			cout << "猜小了,请重新输入：";
		}
		else {
			//猜对	退出游戏
			cout << "猜对啦！";
			break;
		}
	}


	return 0;
}