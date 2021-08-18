#include<iostream>
#include<string>

using namespace std;

int main() {

	//二维数组案例 - 考试成绩统计

	//1. 创建二维数组
	int score[3][3] = { {100,100,100},{90,50,100},{60,70,80} };
	string names[3] = { "张三","李四","王五" };
	//统计每个人的总和分数
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;//分数综合
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
			//cout << score[i][j] << "\t";
		}
		cout << names[i] << "的总分为：" << sum << endl;
	}
	return 0;
}