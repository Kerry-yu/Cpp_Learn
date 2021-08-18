#include<iostream>

using namespace std;

int main() {

	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	cout << "分数为：" << score;

	switch (score)
	{
	case 100:
		cout << "满分" << endl;
		break;//退出当前分支
	case 60:
		cout << "及格" << endl;
		break;
	default:
		cout << "不合格" << endl;
		break;
	}
	return 0;
}