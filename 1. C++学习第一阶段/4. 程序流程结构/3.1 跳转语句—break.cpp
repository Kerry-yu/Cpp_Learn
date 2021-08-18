#include<iostream>

using namespace std;

int main() {

	//break的使用时机

	//1. 出现在switch语句中
	cout << "请选择难度" << endl;
	cout << "1.简单" << endl;
	cout << "2.中等" << endl;
	cout << "3.困难" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "选择的是简单" << endl;
		break;
	case 2:
		cout << "选择的是中等" << endl;
		break;
	case 3:
		cout << "选择的是困难" << endl;
		break;
	}

	//出现在循环语句中
	for (int i = 0; i < 10; i++)
	{
		if (i == 5) {
			break;
		}
		cout << i << endl;
	}

	//出现在嵌套循环中
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
		{
			if (j == 5) {
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}