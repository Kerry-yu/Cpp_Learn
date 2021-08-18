#include<iostream>

using namespace std;

int main() {

	//选择结构	if语句
	//单行格式if语句
	/*int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	cout << "分数为：" << score;
	if (score > 85) {
		cout << ",成绩为优秀" << endl;
	}*/

	//多行格式if语句
	/*int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	cout << "分数为：" << score;
	if (score > 85) {
		cout << ", 成绩为优秀" << endl;
	}
	else {
		cout << ", 成绩不优秀" << endl;
	}*/

	//多条件if语句
	/*int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	cout << "分数为：" << score;
	if (score > 85) {
		cout << ", 成绩为优秀" << endl;
	}
	else if (score > 60 && score < 85) {
		cout << ", 成绩为合格" << endl;
	}
	else {
		cout << ", 成绩不合格" << endl;
	}*/

	//嵌套if语句
	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	cout << "分数为：" << score;
	if (score > 85) {
		cout << ", 成绩为优秀" << endl;
		if (score > 95) {
			cout << "一等奖" << endl;
		}
		else if (score > 90 && score < 95) {
			cout << "二等奖" << endl;
		}
		else {
			cout << "三等奖" << endl;
		}
	}
	else if (score > 60 && score < 85) {
		cout << ", 成绩为合格" << endl;
	}
	else {
		cout << ", 成绩不合格" << endl;
	}

	return 0;
}