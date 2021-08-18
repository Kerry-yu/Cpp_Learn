#include<iostream>

using namespace std;

int main() {

	for (int i = 0; i <= 100; i++)
	{
		//奇数输出，偶数不输出
		if (i % 2 == 0) {
			continue;
		}
		cout << i << endl;
	}
	return 0;
}